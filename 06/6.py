#!/usr/bin/python

# get the sum of the squares of the first 100 numbers
sumSquares = 0
for i in range(1,101):
	sumSquares = sumSquares + ( i * i)

# get the sqaure of the sum of the first 100 numbers
squareOfSum = 0
for i in range(1,101):
	squareOfSum = squareOfSum + i

squareOfSum = squareOfSum * squareOfSum

# now print the difference

print "Answer is %d\n" % abs( sumSquares - squareOfSum )
