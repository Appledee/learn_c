//Write a program to print a histogram of the lengths of words in its input. 
//to draw the histogram with the bars horizontal. 


//Identify a word and count its length record the occurrence of each word plot them in a histogram

//********************************************//
// 1. State the problem in a state diagram; e.g. 1_13_state_chart.jpeg
// 2. Anticipate the output of each state;
// 3. Carefully but clearly distinguish each situation in the c condition loop;
// 4. Set state flags if necessary
// Comments: One could also try to use VHDL to implement this state machine. 
//********************************************//
#include<stdio.h>

#define maxWordLength 11
#define maxHist 15
#define IN 1
#define OUT 0


main (){


int nc, nw;
int c, flag;
int word[maxWordLength];
int overflow;
//initialize the word array;
for (int i = 0; i <maxWordLength; i++)
   {
    word[i] =0;
   }

flag = OUT;
while ((c = getchar()) != EOF)
{
  if (c == ' ' || c== '\n' ||c=='\t') 
    {    
      flag = OUT;
           if (nc > 0)
                 if (nc < maxWordLength)
                    {
                     ++word[nc];
                     printf("the code runs into this loop and word[nc] is %d", word[nc]);
                    }
                 else { ++overflow;}
     nc = 0;
    }

  else if (flag == OUT)
    { 
      flag = IN;
      nc = 1;
    }
  else
    {
      ++nc;
    }
}
  
//plot the histogram of the occurrences of each word;

//summation of all the word counts

int totalNum = 0;
for (int i = 0; i< maxWordLength; i++)
  {
        totalNum = totalNum + word[i];
  }

//plot the percentage of occurrence of each word;

for (int i = 0; i< maxWordLength; i++)
  {
    printf ("the occurrence of %d length word is %f \n : ", i ,(double)word[i]/totalNum); 
    
  }

//find the maxvalue in the word array
//
int maxvalue = word[0];
for (int i = 0; i < maxWordLength; i++)
  {
    if (word[i] > maxvalue)
     {
      maxvalue = word[i];
     }
  }


// plot the histogram of the occurrence of each word;
int len = 0;
for (int i = 0; i < maxWordLength; i++)
  {

    if (word[i]>0)
     {
           len = word[i] * maxHist / maxvalue;
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

if(overflow > 0)
  {
      printf("There are %d words >= %d\n", overflow, maxWordLength);
  }


}
