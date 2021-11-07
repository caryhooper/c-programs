#include <stdio.h>
main(){
	//1-9 Program to copy input into output, replacing each string of one or more  blanks by a single blank.
	//1-10 Program to copy input to output replacing each tab with \t, backspace by \b and backslash by 
	int c;
	c = 0;
	while ( c != EOF ){
		c = getchar();
		/* 1-9
		if (c == ' ' || c == '\t' || c == '\n'){
			putchar(' ');
			while ( c == ' ' || c == '\t' || c == '\n' ){
				c = getchar();
			}
		}
		*/
		// 1-10
		if ( c == '\t' || c == '\b' || c == '\\'){
			putchar('\\');
		}else {
			putchar(c);
		}
		if ( c == '\t'){
			putchar('t');
		}
		if ( c == '\b' ){
			putchar('b');
		}
		if ( c == '\\' ){
			putchar('\\');
		}
	}	
	printf("Exiting...");
}
