// this is a program to count blanks, tabs, and newlines;
//

#include <stdio.h>

int main (){
int nb = 0;int nt = 0; int nl=0;
int c;

while((c=getchar()) != EOF){
if (c == ' ')
  ++nb;
if (c =='\t')
  ++nt;
if (c == '\n')
  ++nl;

} 
printf("Number of blanks is %d\n, number of tabs is %d\n, number of lines is %d\n",nb, nt, nl);
return 0; 
}


