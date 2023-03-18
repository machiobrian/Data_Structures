from queue import Queue

# initializing a queue
q = Queue(maxsize = 3)

# give the maxsize of the Queue
q.qsize()
# print(q.qsize())

# adding a new element to a queue
q.put('a')
# q.put('a')
# q.put('a')
# print(q.qsize())

# return boolean for full queue
q.full()
# remove element from queue
q.get()

# return boolean for empty queue
q.empty()