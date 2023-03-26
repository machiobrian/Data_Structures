"""
This a blueprint for creating objects (instances).
These objects can have : Attributes/variables and methods/functions
"""

class DataPipeline:

    def __init__(self, input_path:str, output_path:str) -> None:
        self.input_path = input_path
        self.output_path = output_path

    def extract_data(self) -> dict:
        # this portion of code extracts data from input_path
        pass 
    def transform_data(self, data: dict) -> dict:
        # this section of code transforms data
        pass
    def save_data(self, data:dict) -> None:
        # this part of code saves transformed data to output path
        pass

datapipeline = DataPipeline("input.csv", "output.csv") # calling the DataPipeline
                                                       # instantiates in/out path
raw_data = datapipeline.extract_data()
transformed_data = datapipeline.transform_data(raw_data)
datapipeline.save_data(transformed_data)
