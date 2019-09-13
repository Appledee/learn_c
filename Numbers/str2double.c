#include<ctype.h>


double str2double(char* str)
{

  static double number, power;
  int count = 0;
  int sign;

  for(count = 0; isspace(*(str+count)) || !isdigit(*(str+count)); count++)
    ;
   
  sign = (*(str + count) == '-')? -1 : 1;

  if(*(str + count) == '-' || *(str + count) == '+')
  	count++;

  for(number = 0.0; isdigit(*(str + count)); count++)
  	number = number * 10.0 + (*(str + count) - '0');
  
  if(*(str + count) == '.')
  	count++;

  for(power = 1.0; isdigit(*(str + count)); count++)
  {
  	number = number * 10.0 + (*(str + count) - '0');
    power *= 10.0;
  }

return sign * number / power;

}
