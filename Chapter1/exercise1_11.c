//this is a program to count words listed in an input line. 
//

#include <stdio.h>
#define OUT 0
#define IN 1

int main() {

int c, nl, nw, nc, state;
state = OUT;
nl = nw = nc = 0;

while ((c=getchar() != EOF)){
  if (c == '\n')
    ++nl;
  if (c == ' ' || c == '\n' || c== '\t')
    state = OUT;
    else if (state == OUT)
      state = IN;
       ++nw;}
printf("%d %d %d\n", nl, nw, nc);
//return 0;


}