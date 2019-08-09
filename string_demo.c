#include <stdio.h>

int i;
char cval = ' ';

int main(void)

{
  char str[16] = "A test string\0";

  for (i = 0; cval != '\0'; i++){
    cval = str[i];
    if(cval != '\0') 
      printf("%c\n", cval);

  }



}
