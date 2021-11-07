#include <stdio.h>
main(){
	int c;
	int retval;
	// c = getchar();
	// while (c != EOF){
	// 	putchar(c);
	// 	c = getchar();
	// }
	printf("\nThe Value of EOF is %d\n",EOF); //1-7
	while ((c = getchar()) != EOF){
		retval = c != EOF;
		printf("\nOutput of getchar(): %d\n",retval); //1-6
		printf("\nValue of c in hex: %x\n",c);
		putchar(c);
	}
}