#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    u_int8_t val;
    u_int8_t *ptr;
    
    printf("please enter your number of bytes to allocate\n");
    scanf ("%hhu", &val);
    
    if (val>=0 && (val<=100)) printf("entered number:%u\n", val);
    else {printf("please enter a valid number\n");
            return -1;}
   
    //ptr = (u_int8_t*)malloc(val*sizeof(u_int8_t)); //not initialized to 0
    ptr = (u_int8_t*)calloc(val, sizeof(u_int8_t)); // initialized to 0
    if (ptr == NULL)
        {printf("memorry allocation failed\n");
        return -1;}

    for (u_int8_t i = 0; i< val; i++)
    {
        ptr[i] = i+1;
        printf("entered value is: %d\n", ptr[i]);
    }
    free(ptr);
    return 1;
}

/*
results: 
please enter your number of bytes to allocate
10
entered number:10
entered value is: 1
entered value is: 2
entered value is: 3
entered value is: 4
entered value is: 5
entered value is: 6
entered value is: 7
entered value is: 8
entered value is: 9
entered value is: 10
*/