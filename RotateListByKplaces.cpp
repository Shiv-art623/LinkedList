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

Node* RotateList(Node* head, int k){
    if(head == NULL || head->next == NULL)return head;
    Node*temp = head;
    int count = 0;
    while(temp){
     count++;
     temp = temp->next;
    }
    k = k%count;
    if(k == 0) return head;
    count = count - k;
    Node* prev = NULL;
    Node* curr = head;
    while(count--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    Node* front = curr;
    while(front->next != NULL ){
        front = front->next;
    }
    front->next = head;
    head= curr;
    return head;
    
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    Node* temp = RotateList(head,2);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}