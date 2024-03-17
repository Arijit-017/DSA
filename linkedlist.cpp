#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=NULL;
    }
};

Node* ConvertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

Node* deleteTail(Node* head){
    Node* temp=head;
    Node* pretemp=NULL;
    while(temp->next!=NULL){
        pretemp=temp;
        temp=temp->next;
    }
    pretemp->next=NULL;
    free(temp);
    return head;
}

Node* deleteKthElement(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    else if(k==1){
        return deleteHead(head);
    }
    Node* temp=head;
    Node* prev=NULL;
    int count=0;
    while(temp->next!= NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* deleteEle(Node* head,int ele){
    if(head->data==ele){
        return deleteHead(head);
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        if(temp->data==ele){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* insertHead(Node* &head, int val) {
    Node* newNode = new Node(val, head);
    head = newNode;
    return head;
}


Node* insertTail(Node* &head,int val){
    if(head==NULL){
        return new Node(val,head);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

Node* insertKthElement(Node* &head,int val,int k){
    if(head==NULL){
        if(k==1){
            return new Node(val);
        }
        else{
            return NULL;
        }
    }
    if(k==1){
        return new Node(val,head);
    }
    // int count=0;
    Node* temp=head;
    // while(temp!=NULL){
    //     count++;
    //     if(count==(k-1)){
    //         Node* x=new Node(val,temp->next);
    //         temp->next=x;
    //         break;
    //     }
    //     temp=temp->next;
    // }
    for(int i = 1;i<k-1;i++){
        temp=temp->next;
    }
    Node* x=new Node(val,temp->next);
    temp->next=x;
    return head;
}

Node* insertBeforeX(Node* &head,int val,int x){
    if(x==head->data){
        return new Node(val,head);
    }
    Node* temp=head;
    while(temp->next->data!=x){
        temp=temp->next;
    }
    Node* newNode= new Node(val,temp->next);
    temp->next=newNode;
    return head;
}

void display(Node* head){
    while(head){
        cout<<head->data<<"  ";
        head=head->next;
    }
}

int main(){
    vector<int> arr={10,20,30,40,50,60,70,80,90,100};
    Node* head=ConvertArr2LL(arr);
    display(head);
    head=deleteHead(head);
    cout<<endl;
    display(head);
    head=deleteTail(head);
    cout<<endl;
    display(head);
    head=deleteKthElement(head,5);
    cout<<endl;
    display(head);
    head=deleteEle(head,50);
    cout<<endl;
    display(head);
    insertHead(head,10);
    cout<<endl;
    display(head);
    insertTail(head,100);
    cout<<endl;
    display(head);
    insertKthElement(head,50,5);
    cout<<endl;
    display(head);
    insertBeforeX(head,60,70);
    cout<<endl;
    display(head);

    return 0;
}