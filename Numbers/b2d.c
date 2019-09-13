/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/

#include<stdio.h>

// use getchar() can make the program easier

int main ()
{
  char input[16];
  int result = 0;
  int b2d (char reformated_char[]);
  int len (char reformated_char[]);
  printf("Type your binary number with 0 to 16 digits, e.g. 1001, after done, type Enter. Type your number:  ");
  scanf("%s", input);
  result = b2d(input);
  if(result >=0)
  printf("you input binary number %s is %d in decimal\n", input, result);
  return (0);
}

// int in c is two bytes, 16 bits. 
int b2d (char reformated_char[])
{
   int sum = 0;
   // char reformated_char[];
   //void reformat(char from[], char to[]);
   // reformat the string, get rid of the space, tab
   // reformat (input, reformated_char);

   int length = len (reformated_char);

   for (int i = length-1; i >= 0;  i--)
      {
       int weight = reformated_char[length-i-1] - '0';
       if (weight > 1)
        {
         printf("invalid input binary number\n");
         sum = -1;
         break;
        }
       sum = weight * (1<<i) + sum;
       //printf("%d\n", weight);
       //printf("%d\n", sum);
      }
  return sum;
}

int len ( char reformated_char[])
{  int j =0;
   while (reformated_char[j] != '\0')
       j++;
  return j;
}

/* void reformat(char from[], char to[])
{
 
 for (int j,k = 0; from[j] != '\0' || from[j] !=  '\n'; j++,k++)
      {
        if (from[j] == ' ' || from[j] !=  '\t')
           {
             k--;
           }
        else to[k] = from[j]; 
      }
}
*/
