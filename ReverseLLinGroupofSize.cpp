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
Node* reverseItwithk(Node *head, int k){
    Node* first = new Node(0);
    first->next = head;
    int x;
    head = first;
Node* second, *prev, *curr, *front;
    while(first->next){
         x = k;
        second = first->next;
        prev = first;
        curr = first->next;
    
    while(x && curr){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
        x--;
    }
    first->next = prev;
    second->next = curr;
    first = second;
}
first = head;
head = head->next;
delete first;
return head;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    int k = 4;
    head = reverseItwithk(head,k);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}