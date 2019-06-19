/// Write a program to print a histogram of the lengths of words in its input. 
//to draw the histogram with the bars horizontal. 


//identify a word and count its length
//record the occurrence of each word
//plot them in a histogram
//
//


#include<stdio.h>

main (){


int maxWordLength;
int c, flag, charCount;
int word[maxWordLength];

flag = 0;
while ((c = getchar()) != EOF)
  if (c == ' ' && flag == 0) 
    {      charCount = 0;
          flag = 0;
      
    }
  else if (c != ' ' && charCount <= maxWordLength)
    {        ++charCount; 
    }
   else {
         ++word[charCount];
         flag = 0;
        }
  
//plot the histogram of the occurrences of each word;

//summation of all the word counts
for (int i = 0; i< maxWordLength; i++)
{int totalNum = 0;
  totalNum = totalNum + word[i];
  
}

//plot the percentage of occurrence of each word
//
for (int i = 0; i< maxWordLength; i++)
{printf ("the occurrence of %d length word is %d : ", i , word[i]/totalNum); 
}





}
