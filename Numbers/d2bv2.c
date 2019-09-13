/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/



#include <stdio.h>
 
int main()
{
  int tmp =0;
  char c;
  int input;
  printf("Type your decimal number here: ");
  scanf("%d", &input);
  printf("You entered decimal number %d is binary: ", input);

  for (int i = 31; i>=0; i--)
  {
     tmp = input >> i;
     if ( tmp & 1)
     {
       c = 1 + '0';
       printf("%c", c);
     }
     else
     {
       c = 0 + '0';
       printf("%c", c);
     }
  }

  printf("\n");

return 0;
}
