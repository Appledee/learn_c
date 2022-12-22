//implement a queue (FIFO) using C array

#include<stdio.h>
#include<stdlib.h>

#define size 5
int arr[size];
int addq_p = 0;
int popq_p = 0;

void addq(int val);
int qfull(void);
void popq(void);
int qempty(void);

int qfull(){
    if (addq_p == size) return 1;
    return 0;
}

void addq(int val){
    if(qfull()) 
        printf("Q is full, cannot add to queque\n");
    else
    {
        arr[addq_p] = val;
        addq_p ++;
        printf("%d is added into the queque\n", val);
    }
}

int qempty(){
    if(addq_p == popq_p) return 1;
    return 0;
}

void popq(){
    if (qempty())
        printf("Q is empty, cannot pop from the queque\n");
    else
    {
        printf("%d is popped from the queque\n", arr[popq_p]);
        popq_p++;
    }
}

int main(){
    addq(10);
    addq(20);
    addq(30);
    addq(40);
    addq(50);
    addq(60);//Cannot add this to the queque, q is full;
    popq();
    popq();
    popq();
    popq();
    popq();
    popq();//Cannot pop this from the queque, q is empty.
    return 0;

}
/*expected results:
add sequence: 10, 20, 30, 40, 50, 
pop sequence: 10, 20, 30, 40, 50;
*/

/*
actual results: 
10 is added into the queque
20 is added into the queque
30 is added into the queque
40 is added into the queque
50 is added into the queque
Q is full, cannot add to queque
10 is popped from the queque
20 is popped from the queque
30 is popped from the queque
40 is popped from the queque
50 is popped from the queque
Q is empty, cannot pop from the queque
*/

