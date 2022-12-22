#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5};
    long long int base = (long long int)&a;
    long long int base_ = (long long int)&a[0];
    long long int* m = (long long int*)a+1;
    //(long long int*)a;
    long long int* n = (long long int*)&a[0]+1;
    //(long long int*)a[0];

    
    printf("a+1 is %p\n", *m);
    printf("a[0] +1 is %p\n", *n);
    
    printf("%lld\n", base);
    printf("%lld\n", base_);
    if (base == base_) printf("true\n");
    
}

/*
results: 
a+1 is 0x400000003
a[0] +1 is 0x400000003
140726211860464
140726211860464
true
*/