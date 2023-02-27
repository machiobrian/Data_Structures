# use scikit-learn library to make an implemetation of k-means clustering

from sklearn.cluster import KMeans
import numpy as np 

# Define our dataset : has 2 features/columns & 6 data points
data = np.array([
    [1,2],[1,4],
    [1,0],[4,2],
    [4,4],[4,0],
    # [6,8], [0,0]
])
# print(data)
# Create a K-means instance with 2 clusters
kmeans = KMeans(
    n_clusters=2, # default is 8
    # metric=manhattan_distace
)

# Fit the data to the kmeans model
kmeans.fit(data)

# Predict the cluster labels for the data
labels = kmeans.predict(data)

# Print the cluster centers and labels
print("Cluster Centers:", kmeans.cluster_centers_)
print("Labels: ", labels)
