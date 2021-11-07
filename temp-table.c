#include <stdio.h>
/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */

main(){
	/*int fahr, celsius;*/
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 		/* lower limit of temp table */
	upper = 300; 	/* upper limit */
	step = 20; 		/* step size */

	fahr = lower; 
	printf("F\tC  \n");
	while (fahr <= upper){
		/*celsius = 5 * (fahr-32) / 9;*/
		celsius = (5.0/9.0) * (fahr-32.0);
		// printf("%d\t%d\n", fahr, celsius);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

