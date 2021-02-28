#include <stdio.h>
#include <iostream>

using namespace std;
struct node{
    int data;
    struct node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

struct node* MoveToFront(struct node* head){
    struct node *secLast = NULL;
    struct node *last = head;
    while(last->next!=NULL){
        secLast = last;
        last=last->next;
    }
    secLast->next=NULL;
    last->next=head;
    head = last;
    return head;
}

void printList(struct node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main(){
    int n;
    cin>>n;
    struct node* temp=NULL;
        struct node* head=NULL;
    for(int i=0;i<n;i++){
        int val;
        cin >>val;
        if(i==0){
            head = new node(val);
            temp = head;

        }else{
            temp->next = new node(val);
            temp = temp->next;
        }

    }
    printList(head);
    head = MoveToFront(head);
    printList(head);
return 0;
}