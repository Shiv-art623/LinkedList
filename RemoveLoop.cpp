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
//First Method to Remove---> ye method sare cases me work nhi karegi jese---->loop agar starting node se huaa ho tab
void RemoveLoop(Node* head){
    //Detect teh LOOp first
    Node* slow = head;
    Node* fast = head;

while(fast && fast->next ){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast) break;
}
if(fast == NULL || fast->next == NULL) return;
slow = head;
while(slow != fast){
    slow = slow->next;
    fast = fast->next;
}

while(slow->next != fast){
    slow = slow->next;
}
slow->next = NULL;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n = 12;
    Node* head = new Node(arr[0]);
    Node* temp = head;

    Node* loopNode = NULL;
     for(int i =1; i<n; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;

        if(arr[i] == 4){
            loopNode = temp;
        }
     }
     temp->next =  loopNode;
     RemoveLoop(head);
     Node* curr = head;
while(curr){
    cout << curr->data << " ";
    curr = curr->next;
}
    }