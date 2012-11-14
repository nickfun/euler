#include <iostream>
#include <map>

using namespace std;

int fib( int n ) {
	if( n == 0 || n == 1 ) {
		return n;
	}
	return fib(n-2) + fib(n-1);
}

int isEven( int n ) {
	return (1 & n) == 0;
}

int main( int argc, char **argv) {
	// loop over fib numbers until we get one over 4 million. 
	// find the sum of the even numbered stuff
	unsigned int sum = 0;
	int limit = 4000000;
	int i=0, myfib = 0;
	while( myfib < limit ) {
		myfib = fib(i);
		i++;
		if( isEven(myfib) ) {
			sum += myfib;
		}
	}
	cout << "Answer is " << sum << endl;
	return 0;
}
