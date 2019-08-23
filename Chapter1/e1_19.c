// Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines 
///*/****************************************************************************/
//*
//*
//*
//*/****************************************************************************//




#include<stdio.h>

#define MAXLINE 200
#define maxNumLines 10

int main()
{
   /*initialize the functions*/
int line(char array[], int maxline);
void copy (char to[], char from[]);
void rev(char to[], char from[]);

int max;  /* the recorded max line length*/
int len;
char input[MAXLINE]; /* the current input */
char plot[maxNumLines][MAXLINE];  /* plot the recorded max line */
//int inputMaxLineNumber = 20;
//char *buffer = (char*) malloc(sizeof(char)*MAXLINE*inputMaxLineNumber);

int inputLineNumber = 0;
int k=0;
//int bufferIndex =0;

max = 0;
while ((len = line(input, MAXLINE)) >= 0)
  {   
    inputLineNumber++;
    printf("the current input line number is index: %d. The current input linewidth is %d \n",inputLineNumber, len); 
    
    if(inputLineNumber == maxNumLines)
    printf("warning: too many input lines! The current line number has exceeded the defined maximum line number %d, about to exit \n", maxNumLines);
    if(inputLineNumber > maxNumLines)
     break;
      
    if (len > MAXLINE)
       {
          printf ("the input line length exceeds the MAXLINE length, and its length is %d \n", len);
          printf ("the first MAXLINE length characters are %s \n", input);
       }
    //need design a buffer to store all of the input;

   // *(buffer + input LineNumber * MAXLINE) = input;
    
    if (len > 15 )
              {
                rev(input,input);
                copy(plot[k], input);  
                ++k;
              }

    for(int j = 0; j< k; j++)
        {
           printf("print lines which are longer than 15: %s \n", plot[j]);
        }
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
                   if(c == ' ' || c=='\t')
                     i--;
                   else
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



void rev(char to[], char from[])
{
  int j = 0;
  int size = 0;
  while(from[size]!='\0')
    ++size;

  while(j<= size/2-1 && to[j] != '\0' && from[size-1-j]!='\0')
  {
     
      char tmp = from[j];
       from[j] = from[size-1-j];
       from[size-1-j] = tmp;
      ++j;
  }

}
