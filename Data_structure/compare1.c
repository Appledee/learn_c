
//arithmic seems fine. 

#include<stdio.h>

int compare(int a, int b);

int main()
{
  int c = 20, d = 10;
  int *a = (int*) &c;
  int *b = (int*) &d;
  printf("the function call is %d\n", compare(*a, *b));
}

int compare(int a, int b){
 return(a>b);
}


// return: the function call is 1. 