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
        
    }
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    return 0;
}