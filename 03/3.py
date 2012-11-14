#!/usr/bin/python

from math import sqrt

def isPrime(n):
	max = sqrt(n)
	max = int(max)
	for i in range(3, max, 2):
		if n % i == 0:
			print "nonprime %d has factor %d" % (n, i)
			return False
	return True

n = 600851475143

max = sqrt(n)
max = int(max)

for i in range( 3, max, 2):
	if n % i == 0:
		print "Factor: %d" % i
		if isPrime(i):
			print "its prime"
			myprime = i
print "Answer is ", myprime
