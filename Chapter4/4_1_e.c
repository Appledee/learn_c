//Write a program to print each line of its input that contains a particular "pattern" or string of
//characters. 
//
//
//For examples, searching for the pattern of letters "ould" in the set of lines. 
//Ah Lovel could you and I with Fate conspire
//To grasp this sorry Scheme of Things entire,
//Would not we shatter it to bits -- and then 
//Re-mould it nearer to the Heart's Desire !
//
//will produce the output
//Ah Lovel could you and I with Fate conspire
//Would not we shatter it to bits -- and then
//Re-mould it nearer to the Heart's Desire !
//
/////*/****************************************************************************/
//*
//*
//*
//*/****************************************************************************//

#include <stdio.h>
#define MAXLINE 1000 

/* maximum input line length */
int my_getline(char line[], int max);
int strindex(char source[], char searchfor[]);
char pattern[] = "ould"; /* pattern to search for */


/* find all lines matching pattern */
int main( )
   {
         char line[MAXLINE]; 
         int found = 0;
         while (my_getline(line, MAXLINE) > 0)
             if (strindex(line, pattern) >= 0)
                  {
                   printf("%s", line);
                   found++;
                  }
        return found;
   }

/*getline: get line into s, return length */
int my_getline(char s[], int lim)
   {
         int c, i;
         i = 0;
         while (--lim> 0 && (c=getchar()) != EOF && c != '\n')
                 s[i++] = c;
         if(c== '\n')
                 s[i++] = c;
         s[i] = '\0'; /* put a '\0' after '\n' if the last character is '\n' */
      return i;
   }
/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
   {
         int i, j, k;
         for (i = 0; s[i] != '\0'; i++)
            {
             for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);
             if (k > 0 && t[k] == '\0') return i; /*pattern found*/
            }
          return -1;
   }
