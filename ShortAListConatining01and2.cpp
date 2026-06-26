#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
Node(int i){
    data= i;
    next = NULL;
}
};

Node* SortAlist(Node* head){
    Node * curr = head;
    int count0 =0, count1 = 0, count2 = 0;
    while(curr){
        if(curr->data == 0) count0++;
        else if(curr->data == 1) count1++;
        else count2++;

        curr = curr->next;
    }
    curr = head;
    while(count0--){
        curr->data = 0;
        curr = curr->next;
    }
    while(count1--){
        curr->data = 1;
        curr = curr->next;
    }
    while(count2--){
        curr->data = 2;
        curr = curr->next;
    }
    return head;
}
int main(){
    int arr[] = {0,1,1,0,2,2,2,2,1,0,2};
    Node* head = NULL;
    for(int i =0; i<11; i++){
        if(head == NULL){ head = new Node(arr[i]);}
         else{
            Node *tail = head;
            while(tail->next!=NULL){
                tail = tail->next;
            }
            Node *temp = new Node(arr[i]);     //tail->next = new Node(arr1[i])
            tail->next = temp;
        }
}
Node* temp = head;
while(temp){
    cout<<temp->data;
    temp = temp->next;
}
cout<<endl;

temp = SortAlist(head);
while(temp){
    cout<<temp->data;
    temp = temp->next;
}
return 0;
}
//TC = O(n^2) overall, but the only function O(n)
//Sc = O(1)