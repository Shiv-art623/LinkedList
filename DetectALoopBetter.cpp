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

//Function for detection of a loop in LL  with tc = O(n) SC = O(1)

bool DetectLoop(Node* head){
    Node * slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return 1;
    }
    return 0;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
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
/*Node* curr = head;
unordered_map<Node*, bool> visited;
while(curr != NULL){
   if(visited[curr] == 1){
    cout<<"Loop Found";
    return 0;}

   visited[curr] = 1;
   curr = curr->next;
}
cout<<"Not Found";*/

cout<<DetectLoop(head);
    return 0;
}

//Tc - O(n)    SC = O(n)