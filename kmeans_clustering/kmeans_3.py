# reducing the dimensionality of the data using PCA

import numpy as np 
from typing import List
from sklearn.decomposition import PCA 

def k_means_clustering(
        data: np.ndarray,
        k: int,
        max_iteration: int = 100,
        n_components: int = None # no of principal componnets to retain
                                 # None -> All components are retained
    )-> List[np.ndarray]:

    # reduce the dimensionality of the input data using PCA
    pca = PCA(n_components=n_components)
    data = pca.fit_transform(data)
    # randomly intialize k centroids from the data
    centroids = data[np.random.choice(data.shape[0], size=k, replace=False)]

    # loop until convergence or max_iteration
    for iteration in range(max_iteration):
        # assign each dataset to rhe closest centroid
        distances = np.linalg.norm(data[:, np.newaxis, :] - centroids, axis=2)
        labels = np.argmin(distances, axis=1)
        print(distances, labels)

        # update the centroid based on the mean of the data points
        new_centroids = np.ndarray(
            [data[labels==1].mean(axis=0) for i in range(k)])
        
        # check for convergence
        if np.allclose(centroids, new_centroids):
            break
        else:
            centroids = new_centroids

    # before returning the centroids, we transform them back to the original space
    centroids = pca.inverse_transform(centroids)

    return centroids