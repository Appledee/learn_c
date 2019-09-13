/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/



// Convert a decimal to binary

#include<stdio.h>
#define NUMBITS 32


int main()
{

  
  void d2b(int in, char from[]);
  void rev(char from[]);
 
  char result[NUMBITS+1];
  int input;

  printf("Type your decimal number here: ");
  scanf("%d", &input);
  printf("%d\n", input);
  d2b(input, result);
  rev(result);
  printf("Your decimal number %d is %s in binary form. \n", input, result);
  return 0;

}


void d2b(int in, char result[])
{
   int i = 0;
   //limit the input to 4 bytes which is -2,147,483,648 to 2,147,483,647
   if (in < -2147483648 || in > 2147483647)
      printf("error");

  
 while (in > 0)
  {
    result[i] = in % 2 +'0' ;
    i++;
    in = in/2;
    printf("%d", in);
  }

 for (int k = i; k< NUMBITS; k++)
  result[k] =0 + '0';

 result[NUMBITS] = '\0';

}


void rev(char from[])
{
   int size = 0;
   while (from[size] != '\0')
     size++;

  char tmp;
  for (int i=0; i<= size/2-1;  i++)
  {
    tmp =  from[size-1-i] ;
    from[size-1-i] = from [i];
    from [i] = tmp;
  }
}
