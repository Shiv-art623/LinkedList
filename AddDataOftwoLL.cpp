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
//Function for reversing a Linked list
Node* ReverseLL(Node* curr, Node* prev){
    if(curr == NULL)  return prev;

    Node* front = curr->next;
    curr->next = prev;
    return ReverseLL(front, curr);
}
int main(){
    Node* first = new Node(9);
    first->next = new Node(7);
    first->next->next = new Node(6);
    first->next->next->next = new Node(8);
    first->next->next->next->next = new Node(4);

    Node* second = new Node(6);
    second->next = new Node(4);
    second->next->next = new Node(3);
    second->next->next->next = new Node(8);

    first = ReverseLL(first,NULL);
    second = ReverseLL(second,NULL);

    Node*curr1 = first, *curr2 = second;
    Node* head = new Node(0);
    Node* tail = head;
    int carry = 0;
    while(curr1 && curr2){
        int sum = curr1->data + curr2->data + carry;
        tail->next = new Node(sum%10);
        tail =  tail->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
        carry = sum/10;
    }

    while(curr1){
        int sum = curr1->data+ carry;
        tail->next = new Node(sum%10);
        tail = tail->next;
        curr1 = curr1->next;
        carry = sum/10;
    }
     while(curr2){
        int sum = curr2->data+ carry;
        tail->next = new Node(sum%10);
        tail = tail->next;
        curr2 = curr2->next;
        carry = sum/10;
    }

    //Last me agar carry bachi ho to usko add karna
    while(carry){
   tail->next = new Node(carry%10);
   tail = tail->next;
    carry/=10;
    }
    //Now reverse the generated LL
    head = ReverseLL(head->next,NULL);
   Node* temp = head;
   while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   return 0;
}