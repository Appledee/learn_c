//  ****    a very good example about float data type in C ///
// |Type	       |Size	      |Ranges	      |Smallest Positive Value	 |Precision
// |             |            |             |                          |
// |float        |4 bytes    	|±3.4E+38	    |1.2E-38                   |6 digits
// |double       |8 bytes	    |±1.7E+308	  |2.3E-308	                 |15 digits
// |long double	 |10 bytes	  |±1.1E+4932	  |3.4E-4932                 |18 digits
//
////  https://www.zentut.com/c-tutorial/c-float/
//
//
/*
 * File   : main.c
 * Author : zentut.com
 * Purpose: C float demo
 */
 
#include <stdio.h>
#include <float.h>
 
int main( )
{
  printf("Storage size of float number is: %d bytes\n"
         "Minimum float value: %E\n"
         "Maximum float value: %E\n"
         "Precision: %d decimal digits\n",
         sizeof(float),
         FLT_MIN,
         FLT_MAX,
         FLT_DIG);
    printf("**********************************************\n");

    printf("Storage size of double float number is: %d bytes\n"
         "Minimum double float value: %E\n"
         "Maximum double float value: %E\n"
         "Precision: %d decimal digits\n",
         sizeof(double),
         DBL_MIN,
         DBL_MAX,
         DBL_DIG);
   printf("**********************************************\n");

   printf("Storage size of long double float number is: %d bytes\n"
         "Minimum long double float value: %E\n"
         "Maximum long double float value: %E\n"
         "Precision: %d decimal digits\n",
         sizeof(long double),
         LDBL_MIN,
         LDBL_MAX,
         LDBL_DIG);

    printf("**********************************************\n");

  puts("\nExample of float precision:\n");
  double d = 12345.6;
  float  f = (float)d;
 
  printf("The floating-point number d  "
         "%18.10f\n", d);
  printf("Stored in a variable f\n"
         "of type float as the value   "
         "%18.10f\n", f);
 
  return 0;
}
