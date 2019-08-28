/* Write a loop equivalent to the for loop below without using && or || */

/* if (( year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
 *   printf ("%d is a leap year\n", year);
 * else
 *   printf("%d is not a leap year\n", year);    */




#include <stdio.h>
int leap_year_if (int y1);
int leap_year_logic ( int y2);

int main()
{
  int input;
  int year = 10000;
  printf("Enter any year here: ");
  scanf ("%d", &input);

  if(leap_year_logic(input)) printf("the input %d is a leap year\n", input);
  else  printf("the input %d is not a leap year\n", input);

  /*check if we got the same result using leap_year_if*/

  if (leap_year_if(input) == leap_year_logic(input)) printf("the leap year function using all if--else statements is correct!\n");

 
  /* scan 10000 years to test the if-else leap year function */
  for (int i = 0; i< year; i++)
      {
        if (leap_year_if(i) != leap_year_logic(i))
        {
          printf("the year %d using all if--else statements leap year function is not matching with all logic leap year function!\n", i);
          break;
        }
      }

/* Mark the program has reached here */
printf("After 10000 year tests have been scanned, the leap year function using all if-else statems is correct. \n");

return 0;
}


/*
 *                num
 *               /   \
 *              4    !4
 *             / \   
 *          100  !100
 *         /  \
 *       400  !400
 * 
 * Be aware that the common divisor between 4 and 100. A number has a divisor of 4 and 100 doesn't
 * necessarily mean it has a divisor of 400, e.g. 2*2*25*3 = 300 % 400 != 0
 * */

int leap_year_if (int year)
{
  if (year % 4 == 0)
         if (year % 100 != 0)
             {
               //printf ("%d is a leap year from using if-else\n", year);
               return 1;
             }
        else if (year % 400 == 0)
             {
               //printf("%d is not a leap year from using if-else\n", year);  
               return 1;
             }
            else return 0;

  else return 0;

}


int leap_year_logic (int year)
{
  if (( year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    { //printf ("%d is a leap year\n", year);
      return 1;
    }
  else
  {
    //printf("%d is not a leap year\n", year);  
    return 0;
  }
}










/*

int my_isAlphabet (char* c )
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int my_isDigit (char* c)
{
  return (c >= '0' && c <= '9' ) ? 1 : 0;
}

int my_isSpace (char* c)
{
  (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v') ? 1 : 0;
}

*/
