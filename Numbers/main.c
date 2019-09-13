// main function to test the str2double.c

#include<stdio.h>
#include<stdlib.h>
#define MAXNUM 100

double str2double(char*);

int main()
{
    double number;
	char* input = (char* )malloc(MAXNUM);
	if(input == NULL)
		exit(EXIT_FAILURE);
	printf("Input string here: \n");
	scanf("%s", input);
    
    number = str2double(input);

    printf("The input string %s contains a double number %f \n", input, number );
    
    free(input);

    return 0;

}