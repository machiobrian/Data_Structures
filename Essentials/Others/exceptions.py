try:
    fh = open("testfile.txt", "r")
    fh.write("This is my test file for Exception Handling")
except IOError:
    print("Error: Can't find file or read data")

# if there are no exceptions, then, we run
else:
    print("Written Content Successfuly to File")
finally:
    print("Error: can't find file or read data")

# Raise an Exeption
x = 3
if x > 5:
    raise Exception('x should not exceed 5, the value of x was: {}'.format(x))

# Assert an error
import sys 
assert ('windows' in sys.platform),  'this code only runs in Windows' # replaced linux with Windows