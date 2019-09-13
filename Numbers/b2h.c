/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/

#include<stdio.h>
#include<stdlib.h>
#define NUMBITS 32

int main()
{
  void b2h(char* input, char* output);
  char* input = (char* ) malloc (NUMBITS+4);
  char* output =(char* ) malloc (NUMBITS/4);
  if(input == NULL || output == NULL)
    exit(EXIT_FAILURE);

  printf("Enter your binary number here: ");
  scanf("%s", input);

 /* int m = 0;
  while( *(input + m) != '\0')
  {
    m++;
    if(*(input + m) == '0' || *(input + m) == '1' || *(input + m) == '\n'  )
      continue;
    else
    {
      printf("Input number is not a valid binary number\n");
      exit(EXIT_FAILURE);
    }
  }*/
  

  b2h(input, output);
  printf("You entered binary number 0b%s is 0x%s in hexdecimal!\n", input,output);
  free(input);
  free(output);
  return 0;
}


void b2h(char* input, char* output)
{
  int count = 0;
  int overflow = 0;
  while( *(input + count) != '\0')//use 0 is okay here, but not '0'. 
    count++;

  if (count > 32)
  {
    printf("Input binary number is too large. Only takes 4 bytes input.\n");
    exit(EXIT_FAILURE);
  }


  overflow = count%4;
  //fill out zeros for higher bits. Can I do a right shift here to automaticly fill out zeros? 
  if(overflow)
   {
     for (int i = count -1; i>=0; i--)
     {
        *(input + i + 4-overflow)  =  *(input + i);

     }

     for( int j = 4-overflow -1; j>=0; j--)
     {
       *(input + j) = '0';
     }

    while( *(input + count) != '\0')
    count++;

   }


 
for (int k = count -1; k>=3; k = k-4)
   {
     
    if ( *(input + k) == '0' &&  *(input + k -1) == '0' &&  *(input + k -2) == '0' &&  *(input + k -3) == '0')  *(output + k/4)  = '0';
    if ( *(input + k) == '1' &&  *(input + k -1) == '0' &&  *(input + k -2) == '0' &&  *(input + k -3) == '0')  *(output + k/4)  = '1';
    if ( *(input + k) == '0' &&  *(input + k -1) == '1' &&  *(input + k -2) == '0' &&  *(input + k -3) == '0')  *(output + k/4)  = '2';
    if ( *(input + k) == '1' &&  *(input + k -1) == '1' &&  *(input + k -2) == '0' &&  *(input + k -3) == '0')  *(output + k/4)  = '3';
    if ( *(input + k) == '0' &&  *(input + k -1) == '0' &&  *(input + k -2) == '1' &&  *(input + k -3) == '0')  *(output + k/4)  = '4';
    if ( *(input + k) == '1' &&  *(input + k -1) == '0' &&  *(input + k -2) == '1' &&  *(input + k -3) == '0')  *(output + k/4)  = '5';
    if ( *(input + k) == '0' &&  *(input + k -1) == '1' &&  *(input + k -2) == '1' &&  *(input + k -3) == '0')  *(output + k/4)  = '6';
    if ( *(input + k) == '1' &&  *(input + k -1) == '1' &&  *(input + k -2) == '1' &&  *(input + k -3) == '0')  *(output + k/4)  = '7';
    if ( *(input + k) == '0' &&  *(input + k -1) == '0' &&  *(input + k -2) == '0' &&  *(input + k -3) == '1')  *(output + k/4)  = '8';
    if ( *(input + k) == '1' &&  *(input + k -1) == '0' &&  *(input + k -2) == '0' &&  *(input + k -3) == '1')  *(output + k/4)  = '9';
    if ( *(input + k) == '0' &&  *(input + k -1) == '1' &&  *(input + k -2) == '0' &&  *(input + k -3) == '1')  *(output + k/4)  = 'A';
    if ( *(input + k) == '1' &&  *(input + k -1) == '1' &&  *(input + k -2) == '0' &&  *(input + k -3) == '1')  *(output + k/4)  = 'B';
    if ( *(input + k) == '0' &&  *(input + k -1) == '0' &&  *(input + k -2) == '1' &&  *(input + k -3) == '1')  *(output + k/4)  = 'C';
    if ( *(input + k) == '1' &&  *(input + k -1) == '0' &&  *(input + k -2) == '1' &&  *(input + k -3) == '1')  *(output + k/4)  = 'D';
    if ( *(input + k) == '0' &&  *(input + k -1) == '1' &&  *(input + k -2) == '1' &&  *(input + k -3) == '1')  *(output + k/4)  = 'E';
    if ( *(input + k) == '1' &&  *(input + k -1) == '1' &&  *(input + k -2) == '1' &&  *(input + k -3) == '1')  *(output + k/4)  = 'F';
       

   }
   
}


