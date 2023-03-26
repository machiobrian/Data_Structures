# Inheritances : create new classes based on existing classes. 
#                allows the new class, inherit the attributes and methods
#                of an existing one

from typing import List

class Data:

    def __init__(self, name:str) -> None:
        self.name = name 
        self.data : List[int] = []

    def add_data(self, data:int) -> None:
        self.data.append(data)

    def describe(self) -> None:
        print(f"This is {self.name} data.")

class SalesData(Data): # instantiate inheritance

    def __init__(self, name:str) -> None:
        super().__init__(name)

    def average_sales(self) -> float:
        return sum(self.data) / len(self.data)

sales_data = SalesData("Sales")
sales_data.add_data(100)
sales_data.add_data(200)
sales_data.add_data(300)

sales_data.describe() # note, inheritance
print(sales_data.average_sales()) # note, inheritance