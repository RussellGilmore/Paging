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
		input = 0;
		printf("Please Input Your Address \n");
	    printf("Input should range inside and include 0 to 4294967295\n");
	    
	    if(fgets(buffer, sizeof(buffer), stdin) != NULL){
			input = atol(buffer);
			printf("The Number entered = %lu\n", input);
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
