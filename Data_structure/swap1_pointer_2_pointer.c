
/**************************************************/
#include<stdio.h>

void swap(int* a, int* b);
int main()
{
  int c = 10, d = 20;
  int *a = (int*) &c;
  int *b = (int*) &d;
  printf ("a is %d and b is %d before swaping\n", *a, *b);
  swap(a, b);
  printf ("a is %d and b is %d after swaping\n", *a, *b);
}

void swap(int* a, int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
//RESULTS: a is 10 and b is 20 before swaping
//a is 20 and b is 10 before swaping