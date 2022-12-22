//stack (LIFO) implementation using c array

#include <stdio.h>
#include <stdlib.h>

#define size 5
int arr[size];
int top = -1;

int stackfull(void);
void push(int val);
int stackempty(void);
void pop(void);

int stackfull(){
    if (top == size -1) return 1;
    return 0;
}

void push(int val){
    if(stackfull()) {printf("Cannot push this val, the stack is full\n");}
    else{
        ++top;
        arr[top]=val;
        printf("%d pushed into the stack\n", val);
        }
}

int stackempty(){
    if(top == -1) return 1;
    return 0;
}

void pop(){
    if(stackempty()) 
        {
            printf("Cannot pop any val, the stack is empty\n");
        }
    else{
        printf("%d popped from the stack\n", arr[top]);
        top--;
        }
}


int main(){
    push(10);
   
    push(20);
    
    push(30);
   
    push(40);
    push(50);
    push(60);//cannot push 60, stack full;
    push(70);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();//cannot pop, stack empty;
    return 0;
}

/*
output: 
10 pushed into the stack
20 pushed into the stack
30 pushed into the stack
40 pushed into the stack
50 pushed into the stack
Cannot push this val, the stack is full
Cannot push this val, the stack is full
50 popped from the stack
40 popped from the stack
30 popped from the stack
20 popped from the stack
10 popped from the stack
Cannot pop any val, the stack is empty
Cannot pop any val, the stack is empty
*/
