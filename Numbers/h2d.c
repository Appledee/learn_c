/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/


#include<stdio.h>
#include<stdlib.h>
#define NUMBITS 32


int main ()
{
  int h2d(char* input);
  char* input;

  int result = 0;

   input = (char*)malloc(NUMBITS/4);
   if(input == NULL)
   exit(EXIT_FAILURE);
  
  printf("Enter your input hexdecimal number here: ");
  scanf("%s", input);
  
  result = h2d(input);
  printf("You entered hexdecimal number 0x%s is %d in decimal\n", input, result);

  free(input);
  
}


int h2d(char* input)
{
  int count = 0;
  int sum = 0;
  int weight = 0;
  


  while (*(input+count) != '\0')
    count++;

  for(int i = count-1; i>=0; i--)
  {
    switch (*(input + i))
    {
      case '0':
        weight = 0;
        break;
      case '1':
        weight = 1;
        break;
      case '2':
        weight = 2;
        break;
      case '3':
        weight = 3;
        break;
      case '4':
        weight = 4;
        break;
      case '5':
        weight = 5;
        break;
      case '6':
        weight = 6;
        break;
      case '7':
        weight = 7;
        break;
      case '8':
        weight = 8;
        break;
      case '9':
        weight = 9;
        break;
      case 'A':
        weight = 10;
        break;
      case 'B':
        weight = 11;
        break;
      case 'C':
        weight = 12;
        break;
      case 'D':
        weight = 13;
        break;
      case 'E':
        weight = 14;
        break;
      case 'F':
        weight = 15;
        break;
      case 'a':
        weight = 10;
        break;
      case 'b':
        weight = 11;
        break;
      case 'c':
        weight = 12;
        break;
      case 'd':
        weight = 13;
        break;
      case 'e':
        weight = 14;
        break;
      case 'f':
        weight = 15;
        break;
      default:
      printf("Error! INPUT NUMBER is not correct");
     }
    
   sum = weight * (1<<((count-1-i)*4)) + sum;
  }

  return sum;
}
