// Write a program to replace tabs in the input with proper number of blank spaces. 
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXLINENUM 50


int main()
{
	int len(char* str);
    int spaces_in_tab(void);
    char* record_line(void);

    int index = 0;
    int number_tabs = 0;

    char* input = (char* )malloc(MAXLINENUM+1);
    //int one_tab_space = spaces_in_tab();
    //printf("one tab space is %d\n", one_tab_space);
    int one_tab_space = 8;

    char* output = (char* )malloc(one_tab_space*(MAXLINENUM+1));
    if(output == NULL || input == NULL)
    	exit(EXIT_FAILURE);

    printf("Enter your input string here: \n");
    input = record_line();

    int length = len(input);
    for(int i = 0; i<length && *(input+i)!='\0' && *(input+i)!='\n'; i++)
    {   
    	index = i + (one_tab_space -1) * number_tabs ;
    	
    	if (*(input+i) == '\t')
    	{   
    		++number_tabs;
    		for(int k = 0; k < one_tab_space; k++)
    		   *(output + index + k) = '*';
    	}
    	else *(output+ index)  = *(input + i);

    }

    printf("The detabed line is : %s\n", output);
    return 0;

}


char* record_line(void)
{
    char* in = (char* )malloc(MAXLINENUM+1);
    if(in == NULL )
    	exit(EXIT_FAILURE);
    int count = 0;
    char c;
    while((c = getchar()) != EOF && c != '\0' && c != '\n' && count < MAXLINENUM)
    {
    	*(in + count) = c;
    	count++;
    }
    
    *(in + count) = '\0';
    printf("Your input line is : %s\n", in );

    return in;
}



int spaces_in_tab(void)
{   
	int count = 0;
	int i = 0;
    char* str1 = "start	end";//a tab in between
    while(*(str1 + count) !='\0')
    	{
    		count++;
    	    if(isspace(*(str1 + count)))
    		   i++;
    	}
    return i;
}


int len(char* str)
{
    int count = 0;
	while(*(str+count)!='\0')
		count++;
	return count;
}















