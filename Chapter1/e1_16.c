//Write a program that reads a set of programs and prints the longest.

//*************************************************************************************//
// 1.  Define an upper bound for maximum input line length;
// 2.  Within the upper bound, capture each input line width;
// 3.  Store the longest line in a different location and print it out;
//*************************************************************************************//


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Write a program that reads a set of test strings and prints the longest.

//*************************************************************************************//
// 1.  Define an upper bound for maximum input line length;
// 2.  Within the upper bound, capture each input line width;
// 3.  Store the longest line in a different location and print it out;
//*************************************************************************************//



#include<stdio.h>

#define MAXLINE 100

int main()
{
   /*initialize the functions*/
int line(char array[], int maxline);
void copy (char to[], char from[]);

int max;  /* the recorded max line length*/
int len;
char input[MAXLINE]; /* the current input */
char plot[MAXLINE];  /* plot the recorded max line */
//int inputMaxLineNumber = 20;
//char *buffer = (char*) malloc(sizeof(char)*MAXLINE*inputMaxLineNumber);

int inputLineNumber = 0;
//int bufferIndex =0;

max = 0;
while ((len = line(input, MAXLINE)) >= 0)
  {   
    inputLineNumber++;
    printf("the current input line number is index: %d. The current input linewidth is %d \n",inputLineNumber, len); 
    
    if(inputLineNumber >=20)
      {
      printf("warning: too many input lines! The current line number has exceeded the defined maximum line number 20");
      }
    if (len > MAXLINE)
       {
          printf ("the input line length exceeds the MAXLINE length, and its length is %d \n", len);
          printf ("the first MAXLINE length characters are %s \n", input);
       }
    //need design a buffer to store all of the input;

   // *(buffer + inputLineNumber * MAXLINE) = input;
    
    if (len > max )
              {
                 max = len;
                 //bufferIndex = inputLineNumber;
                 copy(plot, input );
                 if (max > 0) /* there was a line */
                     printf ("a longer line founded which is %s \n", plot);
              }

    printf("The current max linewidth = %d which has been plotted here again %s \n", max,  plot);

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
                 }      

  array[i] = '\0';/* this will update input[i] to null when the input hit '\n'. Note that it will not 
                         overwrite the previous character updated in the for loop because we use i++ here. */
      /* If the input exceeds the MAXLINE size which means i reached to lim -1, write a statement to
       * continuly count the input character*/
       
  if (i >= lim -1 && (c = getchar())!= EOF && c != '\n') {i++;}
     
            return i;
}



/*Define the copy function*/
void copy(char to[], char from[])
{
  int i =0;
  while ((to[i]=from[i])!= '\0')
        ++i;
}


