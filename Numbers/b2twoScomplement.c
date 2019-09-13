/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/

#include<stdio.h>
#include<stdlib.h>
#define NUMBITS 8

// This program convert a 8-bit signed magnitude binary input to its corresponding
// two's complement. For instance, 
//0000,0000-->0000,0000 (0 in decimal)
//0000,0001-->0000,0001 (1 in decimal)
//...
//0111,1111-->0111,1111 (127 in decimal)

//1000,0000--> 1000,0000 (-128 in decimal)
//1000,0001--> 1111,1111 (-1 in decimal) MSB gives a negative weight, other weights are positive
//1000,0010 --> 1111,1110 (-2 in decimal)
//...
//1111,1110 --> 1000,0010 (-126 in decimal)
//1111,1111-->1000,0001 (-127 in decimal)

//Note, the MSB has to be 1 if you intended to enter a negative number;
// Otherwise, the program will populate zeros for the higher bits. e.g., input 10 actuall gets 0000,0010; 
//Perhaps 1000,0010 is what you tried to input. 
int main()
{

  void b22(char* input, char* output);
  void fill_zero(char* ar);
  char* input = (char* )malloc(NUMBITS);
  char* output = (char* )malloc(NUMBITS);
  if(input == NULL || output == NULL )
  	exit(EXIT_FAILURE);
  printf("Enter your   binary number here: ");
  scanf("%s", input);

  b22(input, output);
  printf("The two's complement number is:  %s \n", output);
  
  free(input);
  free(output);
  return 0;
}

// one's complement: negate each binary number;
// two's complement: one's complement number + 1;

void b22(char* input, char* output)
{
	
	void fill_zero(char* ar);
	fill_zero(input);
  int carry_in = 1;
  // calculate one's complement number.
  // positive number stays the same. 
  if(*(input+0)=='1')
    {
      for(int i = 1; i<NUMBITS ; i++)
         {  
            *(input + i) = !(*(input + i)-'0') + '0';
         }
      // add one, sign bit stays, ignore carry overflow at sign bit

     for (int j = NUMBITS -1; j>=1; j--)
       {
           if(*(input + j) == '0' && carry_in == 1) 
            { 
              *(output + j) = '1';
              carry_in = 0;
            }
            else if (*(input + j) == '1' && carry_in == 1)
              *(output + j) = '0';
            else  *(output + j) = *(input + j);

       }
       *(output + 0) = *(input + 0);

    }
    else if (*(input + 0) == '0')
    {
        for(int k = 0; k<NUMBITS ; k++)
         {
            *(output + k) = *(input + k);
         }
    }
    else printf("Error! the input number is not correct\n");

}

// if the MSB is 1, then no zero will be filled. 
void fill_zero(char* ar)
{
	int count = 0;
	
  while(*(ar+count)!=0)
		count++;
	
  for(int i = 0; i < count; i++)
		*(ar+ NUMBITS -1 -i) = *(ar+ count -1 - i);
   
  for (int j = 0; j< NUMBITS - count; j++)
      *(ar + j) = '0';
}









