#include <stdio.h>
#include "espl_lib.h"
int main()
{
	printf("Hello ESPL\n");
	printf("This is a new print\n");

	unsigned int num;
	char exitChar;

	do
	{
		printf("Please enter a number: \n");
		scanf("%u",  &num);
	
		char *pointerToChar = num_to_words(num);
		printf("Convert your number to word is: %s\n", pointerToChar);
	
		printf("Would you love to continue: Y/N\n");
		scanf(" %c", &exitChar);
	
	}while( exitChar == 'y' || exitChar == 'Y' );
	
	return 0;
}