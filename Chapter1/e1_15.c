// Write a function to convert Fahrenheit to Celsius 
//
//


#include <stdio.h>

float Fahren_to_Celsius ( float fahr);


/* print Fahrenheit-Celsius table
 *   for fahr = 0, 20, ..., 300; floating-point version */

int main ()
{
   float fahr;
   int lower, upper, step;

   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;
      printf ("%s, %s\n", "Fahrenheit", "Celsius");
   while (fahr <= upper)
   {
     printf ("%3.0f %6.1f \n", fahr, Fahren_to_Celsius (fahr));
     fahr = fahr + step;
   }




}


float Fahren_to_Celsius (float fahr)
{

    return 5 * (fahr - 32 ) / 9;

   

}
