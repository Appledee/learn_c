//linked list insert at last

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

//struct node ** head = NULL;

//void addLast(struct node **head, int a);
//void printList(struct node *head);


void addLast(struct node **head, int a){
   //create a new node. 
    struct node *tmp = malloc (sizeof(struct node));
    tmp->data = a;
    tmp->next = NULL;
    if (*head == NULL) *head = tmp;
    else 
    {
        struct node *ptr = *head;
        //find the last node;
        while (ptr->next != NULL) ptr = ptr->next;
        ptr->next = tmp;
    }
}

void printList(struct node * head){
    struct node *tmp = head;
    printf ("Now print the list:");
    while (tmp->next != NULL) //very interesting here, a lot of examples use while(tmp != NULL)
    {
       printf("\t%d->", tmp->data);
       tmp = tmp->next;
    }
    printf("\t%d",tmp->data);
}

int main(){
    struct node *head = NULL;
    addLast(&head, 10);
    addLast(&head, 50);
    addLast(&head, 130);
    addLast(&head, 40);
   
    addLast(&head, 130);
    printList(head);
    return 0;
}