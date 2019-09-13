/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/

#include<stdio.h>
#include<stdlib.h>
#define NUMBITS 32

int main()
{
  void h2b(char* input, char* output);
  char* input = (char*) malloc (NUMBITS/4);
  char* output = (char*) malloc (NUMBITS);
  if ( input == NULL || output == NULL)
    exit(EXIT_FAILURE);
  printf("Enter your hexdecimal number here: ");
  scanf("%s", input);
  h2b(input, output);
  printf("You entered hexdecimal number 0x%s is 0b%s in binary form\n", input, output);
}

void h2b(char* input, char* output)
{
  int count = 0;
  while(*(input + count) != '\0')
    count++;
  
  for(int i = count -1; i >= 0; i--)
  {
    switch(*(input + i))
   {
    case '0': 
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '0';
      }break;
    case '1':
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '1';
      }break;
    case '2':
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '0';
      }break;
    case '3':
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '1';
     }break;
    case '4':
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '0';
      }break;
    case '5':
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '1';
     }break;
    case '6':
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '0';
     }break;

    case '7': 
      {
       *(output + 4*i) = '0';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '1';
      }break;;
    case '8':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '0';
      }break;;
    case '9':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '1';
      }break;
    case 'A':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '0';
     }break;
    case 'a':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '0';
      }break;
    case 'B':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '1';
     }break;
    case 'b':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '0';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '1';
     }break;
    case 'C': 
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '0';
      }break;
    case 'c':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '0';
      }break;
    case 'D':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '1';
      }break;
    case 'd':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '0';
       *(output + 4*i+3) = '1';
     }break;
    case 'E':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '0';
      }break;
    case 'e':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '0';
     }break;;
    case 'F':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '1';
     }break;
    case 'f':
      {
       *(output + 4*i) = '1';
       *(output + 4*i+1) = '1';
       *(output + 4*i+2) = '1';
       *(output + 4*i+3) = '1';
     }break;
    default: 
      printf("Error, input number is not correct!");
   }
 }
}
