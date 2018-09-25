//This is a program to implement a linear function, and print out a range of results. 
//
//
#include <stdio.h>

int main ()
{
float fahr, celsius;
int lower, upper, step;

lower = 0; //lower boundary of the input range
upper = 300; //upper boundary of the input range
step = 20; //step size

printf("this is a frahr to celsius conversion program \n");
fahr = lower;
while (fahr <= upper){
      celsius = (5.0/9.0)*(fahr - 32.0);
      printf("%3.0f  %6.1f\n", fahr, celsius);
      fahr = fahr + step;

}
return 0;

}
