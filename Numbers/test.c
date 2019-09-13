/*******************************************
Author: William. Contact: wb161803@gmail.com
*******************************************/


#include<stdio.h>

int main()
{
  int input;
  int* input1;
  int* input2;
  scanf("%d", &input);
 
  input1 =~(input ^ 1);
  input2 = ~(input ^ 0);


    printf("input1 &1 is %d \n", input1);
     printf("input2 &0 is %d \n", input2);



  return 0;
}






