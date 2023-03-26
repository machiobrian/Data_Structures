# magic mthds : define how objecs of a class behave
# they are called automaticall hwen certain ops are performed on objects of a class

class Person:

    """
    __init__ : initializes an object's attribute when created
    """
    def __init__(self, name:str, age:int) -> None:
        self.name = name 
        self.age = age 

    def __str__(self) -> str:
        return f"{self.name} is {self.age} years old"

person = Person("John", 38) # person `object` is instantiated from class Person.
print(person)