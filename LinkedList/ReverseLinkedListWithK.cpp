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

struct node* reverse(struct node* head,int k){
    struct node *curr = head;
    struct node *prev=NULL,*next=NULL;
    int count =0;
    while(curr!=NULL && count <k){
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(head!=NULL){
        head->next = reverse(next,k);
    }
    return prev;
}

void printList(struct node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main(){
    int n,k;
    cin>>n>>k;
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
    head = reverse(head,k);
    printList(head);
return 0;
}