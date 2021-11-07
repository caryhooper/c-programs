#include <stdio.h>
main(){
	//1-12
	int c;
	while ( ( c = getchar()) != EOF){
		if ( c == '\t' || c == ' ' || c == '\n') {
			while( c == '\t' || c == ' ' || c == '\n'){
				c = getchar();
			}
			putchar('\n');
		}
		putchar(c);
	}
}