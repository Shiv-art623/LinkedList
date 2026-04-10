#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
//int main(){
    /* Static way
    Node a1(4);
    */

    //dynamically
   /* Node *head;
    head = new Node(4);
    cout<<head->data<<endl;
    cout<<head->next;
 */

// Insertion at the start
 /*Node *head;
 head = NULL;
if(head == NULL){
    head = new Node(28);
}

else{
    Node *temp;
    temp = new Node(28);
    temp->next = head;
    head = temp;

}


    return 0;
}*/
    // convertion of array into linked list at the beginning one by one
int main(){
    int arr[5] = {1,2,3,4,5};
    Node *head;
    head = NULL;
    
for(int i =0; i<5; i++){
    if(head == NULL){
        head = new Node(arr[i]);
    }

    else{
        Node *temp;
        temp = new Node(arr[i]);
        temp->next = head;
        head = temp;
    }
}

// Print thr the Linked list-------
Node *temp = head;
while(temp!= NULL){
    cout<<temp->data;
    temp = temp->next;

}
}

    