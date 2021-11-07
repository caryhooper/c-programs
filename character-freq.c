#include <stdio.h>
//Exercise 1-14.  Print a histogram of the frequency of characters input.

main(){
	int c, i , j;
	int char_counter[26];
	for (i = 0; i < 26; i++){
		char_counter[i] = 0; 
	}

	while ( (c = getchar()) != EOF ){
		if ( (c >=  'a' && c <= 'z') || ( c >= 'A' && c <= 'Z' )){
			if ( c >= 'a' && c <= 'z' ) {
				c = c - 32;
			}
			char_counter[c - 'A']++;
		}
	}
	//Print the Histogram
	printf("Frequency of each letter in input...\n");
	for (i = 0; i < 26; i++){
		printf("Letter %c:\t",i + 'A');
		for (j = 0; j < char_counter[i]; j++){
			printf("x");
		}
		printf("\n");

	}
}