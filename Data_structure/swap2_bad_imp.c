#include<stdio.h>

void swap(int a, int b);

int main()
{
  int a = 10, b = 20;
  printf ("a is %d and b is %d before swaping\n", a, b);
  swap(a, b);
  printf ("a is %d and b is %d after swaping\n", a, b);
}

void swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
} //THIS IMPLEMENTATION WON’T GENERATE ERROR, BUT WILL NOT SWAP A AND B. 