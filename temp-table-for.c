#include <stdio.h>
/* print Celsius-Fahrenheit table with for loop 1-5
 for celsius = 0, 20, ..., 300 */

#define LOWER 	0
#define	UPPER 	100
#define	STEP 	5

main(){
	/*int fahr, celsius;*/
	float fahr, celsius;
	// int LOWER, UPPER, STEP;

	// LOWER = 0; 		/* LOWER limit of temp table */
	// UPPER = 100; 	/* UPPER limit */
	// STEP = 5; 		/* STEP size */

	// celsius = LOWER; 
	printf("C\tF\n");
	for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP){
		/*celsius = 5 * (fahr-32) / 9;*/
		fahr = ((9.0 / 5) * celsius) + 32.0;
		// printf("%d\t%d\n", celsius, fahr);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		// celsius = celsius + STEP;
	}
}

