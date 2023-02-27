"""
Our final program takes both Normalization and Dimension Reduction into Consideration
Normalization -> Dimension Reduction -> CLUSTERING -> Inverse_transformation PCA -> Denormalization
"""

import numpy as np 
from typing import List 
from sklearn.decomposition import PCA

def k_means_clustering(
        data: np.ndarray,
        k: int,
        max_iteration: int = 100,
        n_components: int = None 
)-> List[np.ndarray]:

    # NORMALIZATION
    data = (data - np.mean(data, axis=0) / np.std(data, axis=0))

    # Dimension Reduction
    principal_components = PCA(n_components=n_components) # retain all pcs
    data = principal_components.fit_transform(data)

    # Intialize k centroids
    centroids = data[np.random.choice(data.shape[0], size=k, replace=False)]

    # Loop until convergence or maximum iteration
    for iteration in range(max_iteration):
        distances = np.linalg.norm(data[:, np.newaxis, :] - centroids, axis=2)
        labels = np.argmin(distances, axis=1)
        
        # update the centroid based on the meanof the datapoints
        new_centroids = np.ndarray([data[labels==1].mean(axis=0) for i in range(k)])

        # check for convergence
        if np.allclose(centroids, new_centroids):
            break
        else:
            centroids = new_centroids

        # transform the centroids back to their original space : inv_trans
        centroids = principal_components.inverse_transform(centroids)

        # DENORMALIZE
        centroids = centroids * np.std(data, axis=0) + np.mean(data, axis=0)

    return centroids