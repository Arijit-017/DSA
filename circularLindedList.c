#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node{
  int data;
  struct Node *next;
};

int size = 0;
struct Node* head,*tail ,*newNode, *temp;

void display(struct Node *q){
  
}

void append(struct Node* tail,int x){
    newNode = (struct Node *) malloc (sizeof (struct Node));
    newNode->data= x;
    newNode->next = NULL;
    if (tail == NULL){
        tail = newNode;
        tail->next=newNode;
    }
    else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

void addAtBegin(struct Node ** q,int x){
    newNode = (struct Node *) malloc (sizeof (struct Node));
    newNode->data= x;
    newNode->next=*q;
    *q=newNode;
}

void addAtAnyPos(struct Node ** q, int x, int pos) {
    newNode = (struct Node *) malloc (sizeof (struct Node));
    newNode->data = x;
    temp = *q;
    if (pos < 1 || pos > size) {
        printf("\n\n\n\n\t\t\t\t\t\tError\n");
    }
    while (pos > 1) {
        temp = temp->next;
        pos--;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtFirst(struct Node ** q){
  temp=*q;
  *q=temp->next;
  free(temp);
}

void deleteAtLast(struct Node **q) {
    temp=*q;
    struct Node *pretemp = NULL;
    if (temp == NULL) {
        return;
    }
    while (temp->next != NULL) {
        pretemp = temp;
        temp = temp->next;
    }
    if (pretemp == NULL) {
        free(temp);
        *q = NULL;
    }
    else {
        pretemp->next = NULL;
        free(temp);
    }
}

void deleteAtPos(struct Node **q,int num) {
    temp = *q;
    struct Node *pretemp = NULL;
    if(num <=0 && num > size){
        return;
    }
    int count = 0;
    while (temp != NULL && count != num) {
        pretemp = temp;
        temp = temp->next;
        count++;
    }
    pretemp->next = temp->next;
    free(temp);
}

int main(){
    int x;
    head = NULL;
    int choice = 1;
    while (choice){
        int c;
        printf("What you want ? \n\n\t1.For add data at end or create node.\n\t2.For add at begin.\n\t3.For add data at any position.\n-----------------------------------------------------\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf ("------------Enter data------------\n");
            scanf("%d", &x);
            append(&head,x);
            size++;
            break;
        case 2:
            printf ("------------Enter data------------\n");
            scanf ("%d", &x);
            addAtBegin(&head,x);
            size++;
            break;
        case 3:
            printf ("------------Enter data------------\n");
            scanf ("%d", &x);
            int pos;
            printf("----------Enter position----------");
            scanf("%d",&pos);
            addAtAnyPos(&head,x,pos);
            size++;
            break;
        default:
        printf("Vai thik se value daal , andha hai kya?");
            break;
        }
        printf("---------------To add more elements press 1 else 0 ---------------/n");
        scanf ("%d", &choice);
    }
    display(head);
    printf("\nThe size pof the linked list is :  %d\n",size);
    choice=1;
         while (choice){
         int c;
         printf("\nWhat you want?\n\n\t1.Delete a node from first.\n\t2.Delete a node from last.\n");
         scanf("%d",&c);
         switch (c)
         {
         case 1:
              deleteAtFirst(&head);
              size--;
              break;
         case 2:
              deleteAtLast(&head);
              size--;
              break;
         case 3:
              printf("Enter the required position \n");
              int num;
              scanf("%d",&num);
              deleteAtPos(&head,num);
              size--;
              break;
         default:
         printf("Vai thik se value daal , andha hai kya?");
             break;
         }
         printf("---------------To add more elements press 1 else 0 ---------------/n");
         scanf ("%d", &choice);
         }
    display(head);
    printf("\nThe size pof the linked list is :  %d\n",size);
    
    return 0;
}