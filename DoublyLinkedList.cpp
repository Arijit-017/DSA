#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data1,Node* prev1,Node* next1){
        data=data1;
        prev=prev1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        prev=NULL;
        next=NULL;
    }
};

Node* ConvertArr2DLL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],prev,NULL);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    Node*temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    free(temp);
    return head;
}

Node* deleteTail(Node* head){
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newTail=tail->prev;
    newTail->next=NULL;
    tail->prev=NULL;
    free(tail);
    return head;
}

Node* deleteKthelement(Node* head,int k){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            Node*pre=temp->prev;
            Node*post=temp->next;
            pre->next=post;
            post->prev=pre;
            temp->next=temp->prev=NULL;
            free(temp);
        }
        temp=temp->next;
    }
    return head;
}


void display(Node* head){
    Node* temp=head;
    while(temp->next){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<temp->data<<"  "<<endl;
    while(temp->prev!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->prev;
    }
    cout<<temp->data<<"  "<<endl;
}
void insertHead(Node* &head,int val){
    Node* newNode=new Node(val,NULL,head);
    head->prev=newNode;
    head=newNode;
}
void insertTail(Node* &head,int val){
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new Node(val,tail,NULL);
}
void insertKthElement(Node* &head,int val,int k){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==(k-1)){
            Node* newNode=new Node(val,temp,temp->next);
            temp->next->prev=newNode;
            temp->next=newNode;
        }
        temp=temp->next;
    }
}
int main(){
    vector<int> arr={10,20,30,40,50,60,70,80,90,100};
    Node* head=ConvertArr2DLL(arr);
    display(head);
    head=deleteKthelement(head,5);
    display(head);
    head=deleteHead(head);
    display(head);
    head=deleteTail(head);
    display(head);
    insertHead(head,1000);
    display(head);
    insertTail(head,999);
    display(head);
    insertKthElement(head,555,5);
    display(head);
    return 0;
}