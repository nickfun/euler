
sides = 2

def paths(x, y):
    if x>0 and y>0:
        # two paths
        return 2 + paths(x-1,y) + paths(x,y-1)
    elif x>0:
        # one path
        return 1 + paths(x,y-1)
    elif y>0:
        # one path
        return 1 + paths(x-1,y)
    else:
        # no paths
        return 0

print "Lattice paths in a %d x %d grid" % (sides, sides)
print paths(sides,sides)
