#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int i){
        data = i;
        next = NULL;
    }
};

Node* ReverseLL(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node*prev = NULL;
    Node*front = NULL;
    Node*curr = head;
    while(curr){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    Node* ans = prev;
    while(ans){
        cout<<ans->data<<" ";
        ans = ans->next;
    }
   return prev;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(1);
    ReverseLL(head);

    return 0;
}