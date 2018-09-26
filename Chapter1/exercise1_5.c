//this is a program to print out Fahrenheit to Celsius conversion table in reverse order;
//

#include <stdio.h>


int main(){

int lowerlimit = 0;
int upperlimit = 300;
int step = 20;

float fahren, celsius;

printf("Fahrenheit to Celsius conversion table (in reverse order)\n");

fahren = upperlimit;
for(fahren = upperlimit; fahren >= 0; fahren = fahren -step){
celsius = (5.0/9.0) * (fahren - 32.0);
printf("%3.0f  %6.0f\n", fahren, celsius);
}
return 0;

}
