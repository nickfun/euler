
sides = 5

def paths(x, y, dist, goal):
    if dist==goal:
        if x==0 and y==0:
            print "Path"
            return 1
        else:
            print "Bad Path"
            return 0
    if x>0 and y>0:
        return paths(x-1,y,dist+1,goal) + paths(x,y-1,dist+1,goal)
    if x>0:
        return paths(x-1,y,dist+1,goal)
    if y>0:
        return paths(x,y-1,dist+1,goal)
    print "error"
    return -1000


print "Lattice paths in a %d x %d grid" % (sides, sides)

print paths(sides,sides,0,sides*2)
