/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Adding comment.

int main(int argc, char* argv[]) {
	
	if (argc != 2) {   //Checking if number of input is 1.
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} // end main
