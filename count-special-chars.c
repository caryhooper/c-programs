#include <stdio.h>
main(){
	char c;
	//Declare
	int num_lines, num_tabs, num_spaces;
	//Initialize
	num_lines =  num_tabs = num_spaces = 0;

	for(c = getchar(); c != EOF; ){
		c = getchar();
		if ( c == '\n'){ 
			printf("Line Feed Detected!\n");
			num_lines++;
		}
		if (c == '\t'){
			printf("Tab Detected!\n");
			num_tabs++;
		}
		if (c == ' '){
			printf("Space Detected!\n");
			num_spaces++;
		}
	}
	printf("There were %d spaces, %d tabs, and %d newlines.", num_spaces, num_tabs, num_lines);
	
}