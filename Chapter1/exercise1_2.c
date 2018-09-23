// Experiment to find out what happens when printf's argument string cotains \c, where c is some
// system reserved symols. 
//

#include <stdio.h>


int main (){
printf("hello world\y");
printf("hellow world again\7");
printf("hello world \7");
return 0;

}
