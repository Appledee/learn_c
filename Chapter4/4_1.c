//Write a program to print each line of its input that contains a particular "pattern" or string of
//characters. 
//
//Rewrite the function strindex(s,t), which returns the position of the rightmost occurrence of t in
//s, or -1 if there is none. 
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
         int found_index_l = -1; 
         while (my_getline(line, MAXLINE) > 0)
             if ((found_index_l = strindex(line, pattern)) >= 0)
                {
                  printf("%s \n", line);
                  printf("The rightmost pattern is found at index: %d \n", found_index_l);
                }
                   
        return found_index_l;
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
         int i, j, k, last_p_index = 0;
         for (i = 0; s[i] != '\0'; i++)
            {
             for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);
             if (k > 0 && t[k] == '\0')
               last_p_index = i; /*update found pattern */
            }
         if(last_p_index >=0)
           return last_p_index;
         else return -1;
   }
