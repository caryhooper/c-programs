#include <stdio.h>
//Exercise 1-13.  Print a histogram of the length of words in the input.

main(){
	int c, i, j, wl;
	int word_len[32];
	for (i = 0; i < 32; i++){
		word_len[i] = 0; 
	}
	wl = 0;

	while ( (c = getchar()) != EOF ){
		while ( c != ' ' && c != '\n' && c != '\t'){
			wl++;
			c = getchar();
		}
		if ( wl < 32 ){
			word_len[wl]++;
		}
		else{
			word_len[32]++;
		}
		wl = 0; 
	}
	//Print the Histogram
	printf("Length of each word in input...\n");
	for (i = 1; i < 32; i++){
		printf("%d letters:\t",i);
		for (j = 0; j < word_len[i]; j++){
			printf("x");
		}
		printf("\n");

	}
}