# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    # write your code in Python 2.7
    summa = sum(A)
    cur = 0
    minimum = None
        
    for elem in A[:-1]:
        cur += elem
        if minimum is None or minimum > abs(summa - 2 * cur):
            minimum = abs(summa - 2 * cur)
        
    return minimum
