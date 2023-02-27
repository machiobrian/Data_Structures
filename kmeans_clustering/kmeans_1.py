import numpy as np 
from typing import List

def k_means_clustering(data: np.ndarray, k: int, max_iterations: int = 100) -> List[np.ndarray]:
    """
    perfoms kmeans clustering on the input data

    args: 
        data : input data to the cluster : 2D numpy array
               shape (num_samples, num_features)
        k (int) : the number of clusters to create
        max_iteration(int) : the max no. of iterations to perfom, defaults to 100

    returns: 
        List[np.ndarray]; A list of k centroids, each of shape (num_features,)
    """

    # initialize k centroids randomly from he data
    centroids = data[np.random.choice(data.shape[0], size=k, replace=False)]

    # loop until convergence or max_iterations - it will not neccesarily complete the iter
    for iteration in range(max_iterations):
        # Assign each data point to the closest centroid.
        distances = np.linalg.norm(data[:, np.newaxis, :] - centroids, axis=2)
        labels = np.argmin(distances, axis=1)

        # Update centroids based on the mean of the data points
        new_centroids = np.ndarray(
            [data[labels == 1].mean(axis=0) for i in range(k)])
        
        # check for convergence
        if np.allclose(
            centroids,
            new_centroids
        ):
            break
        else:
            centroids = new_centroids
    return centroids

np.random.seed(42)
data = np.vstack([np.random.normal(loc=[0, 0], scale=0.5, size=(50, 2)),
                  np.random.normal(loc=[2, 2], scale=0.5, size=(50, 2)),
                  np.random.normal(loc=[-2, 2], scale=0.5, size=(50, 2))])

k_means_clustering(data=data, k=3)

