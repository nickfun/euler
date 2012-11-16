#include <cstdio>
#include <cmath>

int getFactorCount( int n ) {
	// return the number of factors for this number
	int count = 0;
	int limit = sqrt(n);
	for( int i=1; i<=limit; i++ ) {
		if( n % i == 0 ) {
			count += 2;
		}
	}
	return count;
}

int main( int argc, char **argv ) {
	int triangle = 0;
	int numFactors = 0;
	int i;
	
	for( i=0; numFactors < 500; i++ ) {
		triangle += i;
		numFactors = getFactorCount(triangle);
		printf("%d : %d \n", triangle, numFactors);
	}

	printf("%d has %d factors\n", triangle, numFactors );

	return 0;
}