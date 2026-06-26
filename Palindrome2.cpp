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

bool isPlaindrome(Node* head){
    if(head->next == NULL) return true;
    Node* temp = head;
    int count =0;
    
    while(temp){
        count++;
        temp = temp->next;
    }
    count = count/2;
    Node* pre = NULL;
    Node* curr = head;
    while(count--){
        pre = curr;
        curr = curr->next;
    }
    pre->next = NULL;
    Node* front = NULL;
    pre = NULL;
    while(curr){
        front = curr->next;
        curr->next = pre;
        pre = curr;
        curr = front;
    }
    Node* head1 = head;
    Node* head2 = pre;
    while(head1){
        if(head1->data  != head2->data) {return false;}
        head1++;
        head2++;
    }
    return true;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(1);

    if(isPlaindrome(head)) cout<<"It is a Palindrom";
    else{
        cout<<"Not a Palindrom";
    }
    return 0;
}