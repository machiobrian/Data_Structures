"""
These are functions defined within a class. They also operate on
instances (objects) of that class. 
"""

from dataclasses import dataclass
from typing import List

@dataclass
class Employee:
    name : str
    salary : int

class EmployeeDataset:
    def __init__(self, employee_list: List[Employee]) -> None:
        self.employee_list = employee_list

    # define a method to define certain functions
    def calculate_average_salary(self) -> float:
        total_salary = 0
        for employee in self.employee_list:
            total_salary += employee.salary
        return total_salary / len(self.employee_list)

employee_list = [
    Employee('John', 50000),
    Employee('Mary', 23490),
    Employee('Brian', 500000)
]

dataset = EmployeeDataset(employee_list)
average_salary = dataset.calculate_average_salary()

print(f"The average salary of the employee is $ {average_salary:.2f}")