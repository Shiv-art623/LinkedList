#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
    this->data = data;
    next = NULL;
 }
};

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Deletion at the end-------------->
// There are 3 edge cases for deletion an Node from the linkedlist
    if(head!=NULL){ //1st - Existence of a linkedlist
        if(head->next == NULL){ // if the LL only contain one Node
            Node* temp = head;
            head = NULL;
            delete temp;
        }
        else { // If the LL have more than one Node
          Node* pre = NULL;
          Node* curr = head;
          while(curr-> next != NULL){
             pre = curr;
             curr = curr->next;
          }
          delete curr;
          pre->next = NULL;
        }
    }

    //Print the LL after deletion----->
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}