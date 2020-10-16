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
	
<<<<<<< HEAD
	printf("NEGSUPPORT: Creating conflict.\n");
=======
	printf("NEGSUPPORT: Creating conflict\n");
>>>>>>> br_negativeSupport

	if (argc != 2) {
		printf("NEGSUPPORT: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0) 
	{
		input = -input;
		printf("NEGSUPPORT: Sqrt of %d is %fi\n",-input,sqrt(input));
		printf("NEGSUPPORT: End of program. Exiting.\n");
		exit(-1);
	}
	
	printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));
	printf("NEGSUPPORT: End of program. Existing.\n");
	return(0);

} // end main
