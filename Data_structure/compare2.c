#include<stdio.h>

int compare(int a, int b);

int main()
{
  int a = 20, b = 10;
  printf("the function call is %d\n", compare(a, b));
}

int compare(int a, int b){
 return(a>b);
}

//return: the function call is 1. 