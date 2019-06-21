// Define an upper bound for maximum line length;
// Within the upper bound, capture the input line width;
// Store the longest line in a different location and print it out;
//
//


#include<stdio.h>

#define MAXLINE 1000

int main()
{
   /*initialize the functions*/
int line(char array[], int maxline);
void copy (char to[], char from[]);

int max;  /* the recorded max line length*/
int len;
int input[MAXLINE]; /* the current input */
int plot[MAXLINE];  /* plot the recorded max line */

max = 0;
while ((len = line(input, MAXLINE)) >= 0)
   {
     if (len > max )
     {
       max = len;
       copy(plot, input);
     }
     if (max > 0) /* there was a line */
       printf ("the max length line is ploted here: %s \n", plot);
   }


return 0;
}




/* Define a function that counts the input line length */

int line(char array[], int lim)
{
  int i = 0;
  int c;
  for (i=0; i < lim - 1 && (c = getchar())!= EOF && c != '\n'; i++)     
        {
          array[i] = c;     /* Each input character is stored in the array which passed into this function. Note this doesn't work for a variable.i*/
          
  /*
         if (c == '\n')
         {
          input[i] = c;
           ++i; 
         } I don't think this part of the program will be reached anyway  */
      
        }


      array[i] = '\0';/* this will update input[i] to null when the input hit '\n'. Note that it will not 
                         overwrite the previous character updated in the for loop because we use i++ here. */
        return i;
}



/*Define the copy function*/
void copy(char to[], char from[])
{
  int i =0;
  while ((to[i]=from[i])!= '\0')
        ++i;
}
