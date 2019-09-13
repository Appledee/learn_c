/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/


#include<stdio.h>
#include<stdlib.h>
#define NUMBITS 32

int main ()
{
  void d2h(int input, char* output);
  char* output = (char* ) malloc (NUMBITS/4);
  if(output == NULL)
    exit(EXIT_FAILURE);
  int input;


  printf("Enter your decimal number here: \n");
  scanf("%d", &input);

  d2h(input, output);
  printf("your input decimal number %d is 0x%s in hexdecimal\n", input,output);

  free(output);
  return 0;
}


void d2h(int input, char* output)
{
  int tmp, k, j, count = 0;
  
  for(int i = NUMBITS/4 - 1; i>=0; i--)
  {
    tmp = (input >> (4 * i)) & 0x0000000F;
    
    //flip hexdecimal bits
    j = NUMBITS/4 - i -1;
    switch (tmp)
    {
      case 0x0:  *(output + j) = '0'; break;
      case 0x1:  *(output + j) = '1'; break;
      case 0x2:  *(output + j) = '2'; break;
      case 0x3:  *(output + j) = '3'; break;
      case 0x4:  *(output + j) = '4'; break;
      case 0x5:  *(output + j) = '5'; break;
      case 0x6:  *(output + j) = '6'; break;
      case 0x7:  *(output + j) = '7'; break;
      case 0x8:  *(output + j) = '8'; break;
      case 0x9:  *(output + j) = '9'; break;
      case 0xA:  *(output + j) = 'A'; break;
      case 0xB:  *(output + j) = 'B'; break;
      case 0xC:  *(output + j) = 'C'; break;
      case 0xD:  *(output + j) = 'D'; break;
      case 0xE:  *(output + j) = 'E'; break;
      case 0xF:  *(output + j) = 'F'; break;
      default: printf("error occured.\n");
    }
  }
}
