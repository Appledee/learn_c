//this is a program that implements a function which transfer Celsius to Fahrenheit;
//

#include <stdio.h>

int main () {

int lowerlimit = 0;
int upperlimit = 300;
int step = 20;

float fahr, Celsius;


printf("Celsius to Fahrenheit converter\n");

Celsius = lowerlimit;


while (Celsius <= upperlimit) {
fahr = (9.0 *Celsius) / 5.0 + 32.0;
printf("%3.0f  %6.1f\n", Celsius, fahr);
Celsius = Celsius + step;
}
return 0;
}
