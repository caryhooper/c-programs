#include <stdio.h>
/* print Celsius-Fahrenheit table
 for celsius = 0, 20, ..., 300 */

main(){
	/*int fahr, celsius;*/
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 		/* lower limit of temp table */
	upper = 100; 	/* upper limit */
	step = 5; 		/* step size */

	celsius = lower; 
	printf("C\tF\n");
	while (celsius <= upper){
		/*celsius = 5 * (fahr-32) / 9;*/
		fahr = ((9.0 / 5) * celsius) + 32.0;
		// printf("%d\t%d\n", celsius, fahr);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

