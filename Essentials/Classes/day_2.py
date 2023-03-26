# attributes are variables that hold data within a class

class BankAccount:
    def __init__(self, account_number: int, balance: int) -> None:
        self.account_number = account_number # public attribute
        self._balance = balance # private attribute ('_' : treat as private)

    def deposit(self, amount: int) -> None:
        self._balance += amount # method that modifies private attribute
    
    def withdraw(self, amount: int) -> None:
        if self._balance >= amount:
            self._balance -= amount # method to modify private attributes
        else:
            print("Insufficient Funds")