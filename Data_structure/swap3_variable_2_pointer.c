
#include<stdio.h>

void swap(int* a, int* b);

int main()
{
  int a = 10, b = 20;
  printf ("a is %d and b is %d before swaping\n", a, b);
  swap(&a, &b);
  printf ("a is %d and b is %d after swaping\n", a, b);
}

void swap(int* a, int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*this method works. 
a is 10 and b is 20 before swaping
a is 20 and b is 10 after swaping */