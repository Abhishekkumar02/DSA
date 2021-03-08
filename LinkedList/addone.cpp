#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  struct Node* next;
  Node(int x){
      data = x;
      next = NULL;
  }
};

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<< " ";
        head = head->next;
    }
    
    cout<<"\n";
}
Node* reverse(Node* head){
    Node* curr = head;
    Node *next=NULL,*prev=NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    head = prev;
    return head;
    
}
Node* addOne(Node* head){
    Node* headd = reverse(head);
    Node* res = headd;
    Node* tail = NULL;
    int cay =1,sum=0;
    while(headd!=NULL){
        sum = cay + headd->data;
        cay = (sum>=10) ? 1:0;
        sum = sum%10;
        headd->data = sum;
        tail = headd;
        headd=headd->next;
    }
    if(cay>0){
        tail->next = new Node(cay);
    }
    return reverse(res);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num;
        cin>>n;
        Node *head,*tail;
        cin>>num;
        head = tail = new Node(num);
        for(int i=0;i<n-1;i++){
            cin>>num;
            tail->next = new Node(num);
            tail=tail->next;
        }
        head = addOne(head);
        printList(head);
        
    }
    return 0;
    
}
 



