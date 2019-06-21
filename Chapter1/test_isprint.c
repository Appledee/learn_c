// This is a program to test isprint function
//
//

#include<stdio.h>
#include <ctype.h>


int main (){
   int c;
   for(c = 0; c < 128; c++)
      {
        if (isprint(c))
            printf ("%c ", c);
        
      }
    return 0;




}


