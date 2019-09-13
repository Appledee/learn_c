/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/


#include<stdio.h>
#include<stdlib.h>
#define NUMBITS 32

char* d2b(int);

int main ()
{
  int input;
  char* pointer;
 
  printf("Enter a decmial number here: ");
  scanf("%d", &input);

  pointer = d2b(input);
  printf("The binary form of your entered decimal number %d is %s\n", input, pointer);

  free(pointer);
  return 0;

}


char* d2b(int input)
{
  int count, tmp = 0;
  char* pointer;
  char c;
  pointer = (char*)malloc(NUMBITS+1);

  if (pointer == NULL)
    exit(EXIT_FAILURE);

  for(int i = NUMBITS-1; i>=0; i--)
  {
    tmp = input >> i;
    if (tmp & 1)
    {
      c = 1 + '0';
      *(pointer + count) = c;
    }
    else 
    {
      c = 0 + '0';
      *(pointer + count) = c;
    }
    count++;
  }

  *(pointer + count) = '\0';

return pointer;

}
