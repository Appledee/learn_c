//write a program to count the number of occurrences of each digit, of white space characters
//(blank, tab, newline), and of all other characters. 
//
//
#include<stdio.h>

int main(){
int i, c, nblank, nother;
int ndigit[10];

nblank = nother = 0;
for(i=0;i<10;++i)
  ndigit[i]=0;
int flag=1;

while((c= getchar() != EOF)){
if (c>='0' && c<='9')
    ++ndigit[c-'0'];
  else if (c==' '|| c == '\n' || c=='\t')
    ++nblank;
else
  ++nother;
 // flag = 0;
}

printf("ndigit=");
for(i=0;i<=10;i++)
   printf("%d", ndigit[i]);
   printf(", white space = %d, other = %d \n", nblank, nother);


}
