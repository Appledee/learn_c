//linkedlist insert at the beginning. 

#include <stdio.h>
#include <stdlib.h>


struct node {
int data;
struct node *next;
};

struct node * head=NULL;

void insert (int a);
void print ();//inside the print function, declare a node and point to the node to the one that needs to be printed. 

void insert(int a){
    struct node * tmp = (struct node*) malloc(sizeof(struct node));//allocate memory for one node
    tmp->data = a;//assign the data a to the node data
    //if (head = NULL) tmp->next = NULL;
    tmp->next = head;//the node address is the head's address (insert at the begining)
    head = tmp; //update the head node to tmp node. 
}

void print(){
    struct node * tmp = head;
    printf("the list is:\t");
    while (tmp->next != NULL)
        {
         printf("\t%i->", tmp->data);
         tmp = tmp->next;
        }
    printf("\t%i", tmp->data);//print the first node since the firstnode->next == NULL;
    printf("\tthe list print is done\n");
    
}

int main(){
    int n;
    int a;
    printf("enter the number of list element:");
    scanf("%i", &n);
    
    for(int i = 0; i<n; i++){
        printf("enter the %ith number to insert:", i+1);
        scanf("%i", &a);
        insert(a);
        print();
    }
    return 0;
}

/*
results: 
enter the number of list element:5
enter the 1th number to insert:1
the list is:        1   the list print is done
enter the 2th number to insert:2
the list is:        2-> 1   the list print is done
enter the 3th number to insert:3
the list is:        3-> 2-> 1   the list print is done
enter the 4th number to insert:4
the list is:        4-> 3-> 2-> 1   the list print is done
enter the 5th number to insert:5
the list is:        5-> 4-> 3-> 2-> 1   the list print is done
*/






