"""
self is a reference for instance of a class.
its a way objects refer to themselves and interact with their own attributes & methods
the first arg is always self.
"""

from typing import List
class Dataset:

    # initialize the objects attribute - `data`
    def __init__(self, data: List[int]) -> None:
        self.data = data 
    
    def mean(self) -> float:
        # we make use of self to refer to own attributes
        return sum(self.data) / len(self.data)

data = [1,2,3]
dataset = Dataset(data)

print(f"Mean: {dataset.mean()}")