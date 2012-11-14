#include <stdio.h>
#include <math.h>
#include <map>

using std::map;

int main( int argc, char **argv ) {

	map<int, int> primes;
	primes[1] = 2;
	primes[2] = 3;
	primes[3] = 5;

	// start at 5, loop up
	int n = 5;
	while( primes.size() < 10001 ) {

		n++;

		// loop over our known primes and see if it is divizible by them
		map<int, int>::iterator it = primes.begin();
		while( it != primes.end() ) {
			if( n % (*it).second == 0 ) {
				// it is divizibe by a prime!
				break;
			}
			it++;
		}
		if( it == primes.end() ) {
			// this number is not divizble by the known primes.
			// get the biggest known prime
			map<int,int>::reverse_iterator rit = primes.rbegin();
			int biggest = (*rit).second;
			for( int i = biggest; i<sqrt(n); i++ ) {
				if( n % i == 0 ) {
					// it is divizble
					continue;
				}
			}
			// if we are still here, we have new prime number!
			primes[ (*rit).first + 1 ] = n;
		}

	}

	int size = primes.size();
	map<int,int>::reverse_iterator rit = primes.rbegin();
	int big = (*rit).second;
	printf("PRIMES has a size of %d and it's biggest element is %d \n",
	 size, 
	 big );

	return 0;
}