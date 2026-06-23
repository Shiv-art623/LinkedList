#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};
 //Insertion at the start of doubly  LL
 Node* InsertionAtStart(Node* head){
    if(head == NULL){
        head = new Node(5);
    }
    else{
        Node*temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
 }
 // Insertion at the end of doubly LL
 Node* InsertionAtEnd(Node* head){
    if(head == NULL){
        head = new Node(7);
    }
    else{
        Node* curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        Node* temp = new Node(7);
        curr->next = temp;
        temp->prev = curr;
    }
    return head;
 }
int main(){
/*Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    Node* temp = InsertionAtEnd(head);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }*/

    //Convert an array into doubly LL
    int arr[] = {1,2,3,4,5};
    Node* head = NULL, *tail = NULL;
    for(int i =0; i<5; i++){
        if(head == NULL) {
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node* temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp; //tail humesha aage badhta rahe...
        }
    }
    Node* temp1 = head;
    while(temp1){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    return 0;
}