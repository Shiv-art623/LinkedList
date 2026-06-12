#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;


    //Constructor
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
/*int main(){
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
while(temp!= NULL) //or while(temp)
{
    cout<<temp->data;
    temp = temp->next;

}
}

*/


//Insertion at the end  of linkedlist.......................
//arr - 2, 4, 6,8 add karna he link list me

/*
int main(){
    int arr[4] = {2,4,6,8};
    Node *head = NULL;
    for(int i =0; i<4; i++){
        //if Linkedlist not existed
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node *tail = head;
            while(tail->next!=NULL){
                tail = tail->next;
            }
            Node *temp = new Node(arr[i]);     //tail->next = new Node(arr[i])
            tail->next = temp;
        }
    }
    Node *i;
    i = head;
    while(i){
        cout<<i->data<<" "<<endl;
        i = i->next;
    }

    return 0;
} */


//Creation (add at end) of linkedlist with recurrence------
Node* CreateLinkedList( int arr[], int index, int size){
//Base case
if(index == size) return NULL;
Node * temp;
temp = new Node(arr[index]);
temp->next = CreateLinkedList(arr, index+1, size);
return temp;
}

//Creation (add the begining) of linkedList with recursion------
Node* Createlinkedlist( int arr[], int index, int size, Node* prev){
    if(index == size) return prev;
    Node* temp;
    temp = new Node(arr[index]);
    temp-> next = prev;
    return Createlinkedlist(arr,index+1, size, temp);
}

int main(){
    Node *Head;
    Head = NULL;
     int arr[] = {2,4,6,8,10};
     Head = CreateLinkedList(arr, 0, 5);
      //Head = Createlinkedlist(arr,0,5,NULL);
      // Insertion at particular position----->
      int x = 3;
      int value = 30;
       Node* temp = Head;
       x--;
       while(x--){
        temp = temp-> next;
       }
       Node *temp2 = new Node(value);
       temp2->next = temp-> next;
       temp->next = temp2;
     //Print the value
    //Node* temp;
    temp = Head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
    return 0;
}









    