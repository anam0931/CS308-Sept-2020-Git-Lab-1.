/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
to run 
gcc sqrt.c -lm
./a.out
*/

int main(int argc, char* argv[]) {
	
	printf("Creating conflict\n");

	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0) 
	{
		input = -input;
		printf("Sqrt of %d is %fi\n",-input,sqrt(input));
		printf("End of program. Exiting.\n");
		exit(-1);
	}
	
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Existing.\n");
	return(0);

} // end main
