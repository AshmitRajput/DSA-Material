//Linked-list (Initialization, traversal, array to LinkedList)
/*
#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next1=next;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};

Node* Convertarr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;    
}
int lengthofLL(Node* head){
 Node* temp = head;
 int count=0;
 while(temp){
 count++;
 temp=temp->next;
 }
 return count;   
}

int main(){
 vector<int>arr = {0,5,7,8};
 Node* head = Convertarr2LL(arr);
 cout<<head->data<<endl;
 Node* temp = head;
 while(temp){
 cout<<temp->data<<" ";
 temp=temp->next;
 }
 int length = lengthofLL(head);
 cout<<length<<endl;
}


*/