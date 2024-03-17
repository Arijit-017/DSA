#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node{
  int data;
  struct Node *next;
};

int size = 0;
struct Node* head, *newNode, *temp;

void display(struct Node *q){
  printf("\nDisplaing all elements in the linked list--->\n");
    do{
        printf ("%d  ", q->data);
        q = q->next;
    }while (q->next != head);
    printf ("%d  ", q->data);
}

void append(struct Node** q,int x){
    newNode = (struct Node *) malloc (sizeof (struct Node));
    newNode->data= x;
    newNode->next = NULL;
    if (*q == NULL){
        *q = temp = newNode;
    }
    else{
        temp->next = newNode;
        temp = newNode;
    }
    temp->next=*q;
    size++;
}

int main(){
    int x;
    head = NULL;
    int choice = 1;
    while (choice){
        printf ("------------Enter data------------\n");
        scanf("%d", &x);
        append(&head,x);
        printf("---------------To add more elements press 1 else 0 ---------------/n");
        scanf ("%d", &choice);
    }
    display(head);
    printf("\nThe size pof the linked list is :  %d\n",size);
    return 0;
}