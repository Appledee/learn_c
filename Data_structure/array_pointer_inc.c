#include<stdio.h>
#include<stdlib.h>

int main(){
    u_int8_t a[]={2,5,7,4,5};
    //u_int8_t base = (u_int8_t)&a;
    //u_int8_t base_ = (u_int8_t)&a[0];
    u_int8_t* base = (u_int8_t*)a;
    //(long long int*)a;
    u_int8_t* base_ = (u_int8_t*)&a[0];
    //(long long int*)a[0];

    
    printf("val at a+1 is %u\n", *base);
    printf("val at a[0] +1 is %u\n", *base_);
    base++;
    base_++;
    
    //pointer type defines the step size. 

    printf("val at a+1 is %u\n", *base);
    printf("val at a[0] +1 is %u\n", *base_);
    
    printf("%p\n", base);
    printf("%p\n", base_);
    if (base == base_) printf("true\n");
    
}
/* returns:
val at a+1 is 2
val at a[0] +1 is 2
val at a+1 is 5
val at a[0] +1 is 5
0x7ffcb4dee5f4
0x7ffcb4dee5f4
true
*/
