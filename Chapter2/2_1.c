//  ****    a very good example about float data type in C ///
// |Type	       |Size	      |Ranges	      |Smallest Positive Value	 |Precision
// |             |            |             |                          |
// |float        |4 bytes    	|±3.4E+38	    |1.2E-38                   |6 digits
// |double       |8 bytes	    |±1.7E+308	  |2.3E-308	                 |15 digits
// |long double	 |10 bytes	  |±1.1E+4932	  |3.4E-4932                 |18 digits
//

 /* dont confuse short and short int; usually we define a variable as short, it means short int data
  * type, which is usually 2 bytes. However, if we define a variable as int, it can be 4 bytes. */

 
#include <stdio.h>
#include <float.h>
#include <limits.h>
 
int main( )
{

/* signed types*/
 printf("signed char min =  %d\n", SCHAR_MIN);
 printf("signed char max =  %d\n", SCHAR_MAX);
 printf("signed short min = %d\n", SHRT_MIN);
 printf("signed short max = %d\n", SHRT_MAX);
 printf("signed int min =   %d\n", INT_MIN);
 printf("signed int max =   %d\n", INT_MAX);
 printf("signed long min =  %ld\n", LONG_MIN);
 printf("signed long max =  %ld\n", LONG_MAX);

 /* dont con*/
 printf("signed short int range =   %d bytes\n", sizeof(short int));
 printf("signed int range =   %d bytes\n", sizeof(int));
 printf("signed long int range =   %d bytes\n", sizeof(long int));



/* unsigned types */

printf("unsigned char max =  %u\n", UCHAR_MAX);
printf("unsigned short max = %u\n", USHRT_MAX);
printf("unsigned int max =   %u\n", UINT_MAX);
printf("unsigned long max =  %lu\n", ULONG_MAX);

printf("**********************************************\n");



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
