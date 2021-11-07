#include <stdio.h>
/* count characters in input*/
main(){

	double nc; 
	// while (getchar() != EOF)
	// 	++nc;
	// 
	//This is a for loop with no body.  Syntactically, we should include the
	//null statement ";" on a separate line
	for (nc = 0; getchar() != EOF; nc++ );
		//;
	printf("%.0f\n",nc);
	//%.0f suppresses printing of the decimal point
}