# define dictionary

thisdict = {
    'bob' : 7387,
    'alice' : 8742,
    'jack' : 8343
    # 'key' : value
}

# get value by key
m = thisdict["jack"] # display the value at jack

# set a value -- by key
thisdict['alice'] = 1

# print all the keys - get all keys in a very normal for loop function
for x in thisdict:
    print(x)
# print all the value
for y in thisdict:
    print(thisdict[y], "\n")