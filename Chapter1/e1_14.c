// Write a program to print a histogram of the frequencies of different characters in its input
//


//********************************************//********************************************//
// 1. if getchar() returns a blank, space or tab, the program won't count it as a character;
// 2. Define an array with character index.  If getchar() returns a character, ++array[character];
// 3. Define the array length which is the maximum different characters that the program can handle;
// 4. Plot the histogram of each character frequency. 
//
//
////********************************************////********************************************//


#include<stdio.h>
#include <ctype.h>
#define maxCharNum 150
#define maxHist 15
int c;

int main (){


int array[maxCharNum];
//initialize the array;
for (int i = 0; i <maxCharNum; i++)
   {
    array[i] =0;
   }


while ((c = getchar()) != EOF)
{
  if (c <= maxCharNum)
    ++array[c];

}
  
//plot the histogram of the occurrences of each word;

//find the maxvalue in the array
// 0 doesn't represent a character
int maxvalue = array[1];
for (int i = 1; i < maxCharNum; i++)
  {
    if (array[i] > maxvalue)
     {
      maxvalue = array[i];
     }
  }


// plot the histogram of the occurrence of each word;
int len = 0;
for (int i = 1; i < maxCharNum; i++)
  {

    if(isprint(i))
      {
        printf(" The number %5d represents the character %c. The frequency is %d \n", i, i, array[i]);
      }
    else { printf(" The number %5d represents a non-printable character. The frequency is %d \n", i, array[i]);}


    if (array[i] > 0)
     {
           len = array[i] * maxHist / maxvalue;
                 if (len==0)
                     {
                       len = 1;
                     }
     }else {len = 0;}
    
     while (len > 0)
           {
               putchar('*');
               --len;
           }
     putchar ('\n');  /* This will start a new line for each word[i]. Therefore the histogram is horizontal. */
  }

//print overflow notice


}
