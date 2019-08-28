/* Write a loop equivalent to the for loop below without using && or || */

/* for (i=O; i<lim-1 && (c=getchar() != '\n' && c != EOF; ++i) s[i] = c; */

/* program description: input a line with total characters not passing the limit. Print out the line. */


#include <stdio.h>
#define lim 500


int main()
{
  char s1[lim];
  char s2[lim];
  int i,j,k =0;
  int c; 

/*  How can I make the input character appeared in both for and while loops in parallel? */
/*  For this program, I need to input two identical lines to make the program pass */
  for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
      s1[i] = c;
      s1[i] = '\0';


  while (j < lim-1)
    {
      if ((c=getchar()) != '\n')
        if (c != EOF)
          {
            s2[j] = c;
            ++j;
          }
        else {printf("The end of file, about to break the loop.\n ");break;}
     else { s2[j] = c; break; }
    }
  s2[j] = '\0';


 printf("The line scanned by using logic statements is: %s \n", s1);
 printf("The line scanned by using nested if-else is: %s \n", s2);

 while (s1[k] != '\0' && s2[k] != '\n' && s1[k]== s2[k])
   ++k;

 if(k != i)
 printf("error! the line scanned by logic statements function and nested if-else funciton is not matching!\n");

 return 0;

}











/*

int my_isAlphabet (char* c )
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int my_isDigit (char* c)
{
  return (c >= '0' && c <= '9' ) ? 1 : 0;
}

int my_isSpace (char* c)
{
  (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v') ? 1 : 0;
}

*/
