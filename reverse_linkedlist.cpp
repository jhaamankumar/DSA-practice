#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

}; 
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void traverse(Node* &head){
    Node* temp2=head;
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next;

    }
    cout<<endl;

}

Node* reverse(Node* &head){
    if(head==NULL){
        return head;
    }
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;

        //aage badho
        prev=curr;
        curr=forward;

    }
    return prev;
}
Node* reverseRec(Node* &curr,Node* prev){
    //base case
    if(curr==NULL){
        return prev;
    }
    //connection chnage krna hai
    Node* forward=curr->next;
    curr->next=prev;

//baaki recursion sambhal lega
   return reverseRec(forward,curr);
}

 
int main(){
    Node* b=new Node(3);
    Node* head=b;
    
   
    insertAtHead(head,5);
     insertAtHead(head,7);
      insertAtHead(head,9);
       insertAtHead(head,11);
         

       traverse(head);
       head=reverse(head);
       traverse(head);
       head=reverseRec(head,NULL);
       traverse(head);

    return 0;
}