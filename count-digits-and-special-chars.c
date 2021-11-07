#include <stdio.h>
//1.6 Create a program to count each digit, white space chars ( ,\t,\n), and other.
main(){
	int c, i, nwhite, nother;
	//Declare the array
	int ndigit[10];
	nwhite = nother = 0; 
	//Initialize the array
	for (i = 0; i < 10; i++){
		ndigit[i] = 0;
	}

	while ( (c = getchar()) != EOF){
		if ( c >= '0' && c <= '9' ){
			ndigit[c - '0']++;
		}
		else if ( c == ' ' || c == '\n' || c == '\t'){
			nwhite++;
		}
		else {
			nother++;
		}
	}
	printf("digits = \n");
	for (i = 0; i < 10; i++){
		printf("\t%c: %d\n",i + '0', ndigit[i]);
	}
	printf("White Space: %d\nOther: %d\n", nwhite, nother);

}