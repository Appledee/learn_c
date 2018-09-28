// this is a program which prints its input one word per line/
//
////
//#include<stdio.h>
//#define IN 1
//#define OUT 0
//
//int main(){
//    int c, state;
//    state = IN;
//    while ((c=getchar()) != EOF){
//    if (c == ' ' || c == '\n' || c== '\t'){
//       putchar('\n');
//       state = OUT;}
//       else if (state == OUT){
//           putchar(c);
//           state = IN;}
//          else 
//            putchar(c);
//    
//    }
//   return 0;
//    }
//
//    this program will start a new line at each space (line 13). To fix this bug, 
//    see below code.
//
//
#include<stdio.h>
#define IN 1
#define OUT 0 

int main () {

     int c, state;
     state = IN;
     while((c=getchar())!= EOF)
         if (c == ' ' || c == '\n' || c== '\t'){
              if (state == IN)
                putchar('\n');
            state = OUT;
         }
         else if(state == OUT) {
                putchar(c);
                state = IN;
         }
            else
              putchar(c);

return 0;

}
