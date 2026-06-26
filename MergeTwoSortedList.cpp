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

Node* MergeTwoSortedList(Node* head1, Node* head2){
    Node* head = new Node(0);
    Node* tail = head;
while(head1 && head2){
    if(head1->data <= head2->data){
        tail->next = head1;
        head1= head1->next;
        tail = tail->next;
        tail->next = NULL;
    }
    else{
        tail->next = head2;
        head2= head2->next;
        tail = tail->next;
        tail->next = NULL;
    }
}
if(head1) tail->next = head1;
else tail->next = head2;

tail = head;
head = head->next;
delete tail;
return head;
}

int main(){
    int arr1[] = {1,2,3,3,4,7};
    Node* head1 = NULL;
     for(int i =0; i<6; i++){
        if(head1 == NULL){ head1 = new Node(arr1[i]);}
         else{
            Node *tail = head1;
            while(tail->next!=NULL){
                tail = tail->next;
            }
            Node *temp = new Node(arr1[i]);     //tail->next = new Node(arr1[i])
            tail->next = temp;
        }
     }
     Node* temp = head1;
     while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;
    int arr2[] = {1,2,7,9};
    Node* head2 = NULL;
     for(int i =0; i<4; i++){
        if(head2 == NULL){ head2 = new Node(arr2[i]);}
         else{
            Node *tail = head2;
            while(tail->next!=NULL){
                tail = tail->next;
            }
            Node *temp = new Node(arr2[i]);     //tail->next = new Node(arr2[i])
            tail->next = temp;
        }
     }
       temp = head2;
     while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;

     Node* head = MergeTwoSortedList(head1, head2);
    temp = head;
     while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
return 0;
}
//TC - O(n^2)    //SC = O(1)