//Revise the main routin of the longest-line program so it will correctly print the length of
//arbitrary long input lines, and as much as possible of the text

//*************************************************************************************//
// 1.  Define an upper bound for maximum input line length;
// 2.  Within the upper bound, capture each input line width;
// 3.  Store the longest line in a different location and print it out;
//*************************************************************************************//



#include<stdio.h>
#define MAXLINEWIDTH 2000
int main()
{
   /*initialize the functions*/
int line(char array[], int maxlinewidth);
void copy (char to[], char from[]);


int max;  /* the recorded max line length*/
int len;
char input[MAXLINEWIDTH]; /* the current input */
char plot[MAXLINEWIDTH];  /* plot the recorded max line */

max = 0;
while ((len = line(input, MAXLINEWIDTH)) >= 0)
   {
         
       if (len > max)
         {
           printf ("the input line length exceeds the recored max line length. The current max linewidth is: %d \n", len);
           max = len;
           copy(plot, input);
           if (max > 0) /* there was a line */
                     printf ("the max length line is ploted here: %s \n", plot);


         }
       else 
              {
                printf ("the max input line length is %d \n", max);
                printf("the max linewidht line is plotted here: %s \n", plot);
              }
   }
return 0;
}




/* Define a function that counts the input line length */

int line(char array[], int lim)
{
  int i = 0;
  int c;
  for (i=0; i< lim -1 && (c = getchar())!= EOF && c != '\n'; i++)     
          array[i] = c;     /* Each input character is stored in the array which passed into this function. Note this doesn't work for a variable.i*/
          
          if (c == '\n')
             {
                array[i] = c;
                ++i; 
             }  // I don't think this part of the program will be reached anyway  */
      
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
