#include<stdio.h>
#include<stdlib.h>
#define PAGESIZE 4096 /*The set size for each page*/




int main()
{
	
	char state;
	
	unsigned long input;
	
	
	char buffer[16];
	state = '1';
	printf("Welcome\n");
	while(state != 0) {
		printf("Please Input Your Address \n");
	    printf("Input must be in range from 1 to 20480 \n");
	    
	    if(fgets(buffer, sizeof(buffer), stdin) != NULL){
			input = atol(buffer);
			printf("Number is = %lu\n", input);
		}
		printf("Page Number = %lu\n", (input / PAGESIZE));
		printf("Offset = %lu\n", (input % PAGESIZE));
		printf("Would you like to use the program again?\n");
		printf("Type 1 for YES or Type 0 for NO \n");
		if(fgets(buffer, sizeof(buffer), stdin) != NULL){
			state = atoi(buffer);
			
		}
		
	    
	}
	return 0;
	    	
	
}
