
#include<stdio.h>

void swap(int a, int b);

int main()
{
  int c = 10, d = 20;
  int *a = (int*) &c;
  int *b = (int*) &d;
  printf ("a is %d and b is %d before swaping\n", *a, *b);
  swap(*a, *b);
  printf ("a is %d and b is %d after swaping\n", *a, *b);
}

void swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

/*this method won’t generate error. But will not swap a and b. 
So the functions is better to be implemented by pointers. */