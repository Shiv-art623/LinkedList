#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int i ){
        data = i;
        prev = NULL;
        next = NULL;
    }
};
//delete at the start---->
Node* DeleteAtStart(Node* head){
    if(head != NULL){
        Node* temp = head;
        head = head->next;
        delete temp;
        if(head) head->prev = NULL;
    }
    return head;
}

//Delete at end--------->
Node* DeleteAtEnd(Node* head){
if(head != NULL){
    if(head->next == NULL){
        delete head;
        head = NULL;
    }else{
        Node*curr = head;
        while(curr->next){
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
    }
}

// Deletion at the specific position

void DeletionAtAnyPos(Node* head, int pos){
  //Delete at start
  if(pos == 1){
    if(head->next == NULL){
        delete head;
        head =  NULL;
    }
    //If LL contain more than one node
    else{
        Node* temp = head;
        head = head-> next;
        delete temp;
        head-> prev = NULL;
    }
  }
  //At end OR Middle
  else{
    Node* curr = head;
    while(--pos){
        curr = curr-> next; }
        if(curr->next == NULL){
            curr->prev->next = NULL;
            delete curr;
        }
        else{
            curr->next->prev = curr->next;
            curr-
        }

    }
  }
}
return head;
}
int main(){
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
Node * temp = DeleteAtEnd(head);//DeleteAtStart(head);

while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
}

    return 0;
}