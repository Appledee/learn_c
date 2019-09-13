// main function to test the str2double.c

#include<stdio.h>
#include<stdlib.h>
#define MAXNUM 100

void int2string(int* input, char* output);
void reverse(char* from);

int main()
{
    int* number;
    int input;
	char* out = (char* )malloc(MAXNUM);
	if(out == NULL)
		exit(EXIT_FAILURE);
	printf("Input int number here: \n");
	scanf("%d", number);
    input = *number; 
    int2string(number, out);
    reverse(out);

    printf("The input number %d is %s in string form. \n", input, out);
    
    free(out);

    return 0;

}