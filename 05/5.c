#include <stdio.h>

int main( int argc, char **argv) {

	int n = 10;
	int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int len = 20;
	int i;

	while( 1 ) {
		for( i=0; i<len; i++ ) {
			if( n % list[i] == 0 ) {
				continue;
			} else {
				break;
			}
		}
		// end up here on break.
		if( i == len ) {
			// answer found
			printf("Answer is %d \n", n);
			return 0;
		}
		else
		{
			n++;
		}
	}


	return 0;
}