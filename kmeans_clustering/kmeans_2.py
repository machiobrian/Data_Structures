# difference between kmeans_1.py and kmeans_2.py is 'normalization/denormalization' using zscore.

import numpy as np 
from typing import List

def k_means_clustering(
    data: np.ndarray,
    k: int,
    max_iterations: int = 100, # defaults to 100
) -> List[np.ndarray]: # lisy of k centroids

    # First normalize the input data using zscore
    data = (data - np.mean(data, axis=0)) / np.std(data, axis=0)

    # randomly initialize k centroids from the data
    centroids = data[np.random.choice(data.shape[0], size=k, replace=False)]

    # loop until convergence or max_iteration
    for iteration in range(max_iterations):
        # assign each datapoint to the closest centroid
        distances = np.linalg.norm(data[:, np.newaxis, :] - centroids, axis=2)
        labels = np.argmin(distances, axis=1)
        print(distances, labels)

        # update centroid based on the mean of the data points
        new_centroids = np.ndarray(
            [data[labels==1].mean(axis=0) for i in range(k)])

        # check for convergence
        if np.allclose(centroids, new_centroids):
            break
        else:
            centroids = new_centroids

    # before returning centroid we have to denormalize: return to their original scale
    centroids = centroids * np.std(data, axis=0) + np.mean(data, axis=0)
        
    return centroids