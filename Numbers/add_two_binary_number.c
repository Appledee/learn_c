/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/

#include<stdio.h>
#include<stdlib.h>
#define NUMBITS 32


int main()
{

  void add2b(char* input1, char* input2, char* output);
  void fill_zero(char* ar);
  char* input1 = (char* )malloc(NUMBITS-1);
  char* input2 = (char* )malloc(NUMBITS-1);
  char* output = (char* )malloc(NUMBITS-1);
  if(input1 == NULL || input2 == NULL || output == NULL)
  	exit(EXIT_FAILURE);
  printf("Enter your first binary number here: ");
  scanf("%s", input1);

  printf("Enter your second binary number here: ");
  scanf("%s", input2);

  add2b(input1, input2, output);
  printf("The sum of the two input binary number %s + %s is: %s \n", input1, input2, output);
  
  free(input1);
  free(input2);
  free(output);
  return 0;
}


void add2b(char* input1, char* input2, char* output)
{
	
	void fill_zero(char* ar);
	int carry_in=0;
	int carry_out = 0;
	fill_zero(input1);
	fill_zero(input2);
	/* 1 bit full adder
    a   b   c_in   sum  c_out
    0   0     0     0     0
    0   1     0     1     0
    1   0     0     1     0
    1   1     0     0     1
    0   0     1     1     0
    0   1     1     0     1
    1   0     1     0     1
    1   1     1     1     1
  */
     for (int i = NUMBITS-1 -1; i>=0; i--)
     {
        int a = *(input1 + i) - '0';
        int b = *(input2 + i) - '0';

        if(carry_in == 0)
          {
             *(output + i) = (a ^ b) + '0';
             carry_out = a && b ;
          }
        else
          {
             *(output + i) = (!(a ^ b)) + '0';
             carry_out = a || b;
          }
        
        carry_in = carry_out;   	
     }

}


void fill_zero(char* ar)
{
	int count = 0;
	while(*(ar+count)!=0)
		count++;
	for(int i = 0; i < count; i++)
		*(ar+ NUMBITS-1 -1 -i) = *(ar+ count -1 - i);
    for (int j = 0; j< NUMBITS-1 - count; j++)
    	*(ar + j) = '0';
}




