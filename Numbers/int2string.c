// convert int to string;
#include<stdio.h>

void int2string(int* input, char* output)
{
	int sign;
	int count =0;
	if((sign = *input)<0)
		*input = 0-(*input);
    do 
     {
    	*(output + count) = *input % 10 + '0';
    	count++;
     } while((*input /= 10)>0);
     
     if(sign < 0)
     *(output + count) = '-';

     count++;
     *(output + count) = '\0';

}


void reverse (char* from)
{
	char tmp;
	int count = 0;
	while(*(from+count)!='\0')
	count++;
    //printf("count is %d\n",count );
    for(int i = 0; i < count/2; i++)
    {
    	tmp = *(from + i);
    	*(from + i) = *(from + count - 1 - i);
    	*(from + count - 1 - i) = tmp;
    }

}