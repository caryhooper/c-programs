#include <stdio.h>
main(){
	char c;
	int num_lines;

	num_lines = 0;
	for(c = getchar(); c != EOF; ){
		c = getchar();
		if ( c == 10){ //alternately, we can put c == `\n`
			//this character constant notation is preferred over the integer
			//because it is more obvious
			printf("Line Feed Detected!\n");
			num_lines++;
		}
	}
	if (num_lines == 1){
		printf("There was 1 line feed.");
	}else {
		printf("There were %d line feeds.\n",num_lines);
	}
	
}