"""
Trying to time different orders.
"""

import timeit

def emptyLoop2(n):
    """ Run a 2 level nested for loop with no operation inside.
    
    n -- the variable
    """

    for i in xrange(0, n):
        for j in xrange(0, n):
            # do nothing
            pass

def emptyLoop3(n):
    """ Run a 3 level nested for loop with no operation inside.
    
    n -- the variable
    """

    for i in xrange(0, n):
        for j in xrange(0, n):
            for k in xrange(0, n):
                # do nothing
                pass

def runtimeComparision(n):
    """ Run various configurations with value n."""

    print "Empty 2 level loop n={0} : ".format(n)
    print timeit.timeit(lambda : emptyLoop2(n), number=1)

    print "Empty 3 level loop n={0} : ".format(n)
    print timeit.timeit(lambda : emptyLoop3(n), number=1)

runtimeComparision(100)
