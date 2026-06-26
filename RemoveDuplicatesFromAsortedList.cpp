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
//Remove by using extra space(arr)
Node* RemoveDuplicates(Node* head){
    if(head == NULL) return NULL;
    vector<int> ans;
    ans.push_back(head->data);
    Node* curr = head->next;
    while(curr){
        if(ans[ans.size()-1] != curr->data){
            ans.push_back(curr->data);
        }
        curr = curr->next;
    }
    curr = head;
    int index = 0;
    while(index<ans.size()){
        curr->data = ans[index];
        index++;
        curr = curr->next;
    }
    int size = ans.size();
    curr = head;
    for(int i =1; i<ans.size(); i++){
curr = curr->next;
    }
    curr->next = NULL;
    return head;
}

//In-Place---->
Node* REMOVEDUPLICATES(Node* head){
    Node* prev = head;
    Node* curr = head->next;

    while(curr){
        if(curr->data == prev->data){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else{
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}

int main(){
int arr[] = {2,2,2,3,3,4,4};
Node* head = NULL;
for(int i =0; i<7; i++){
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
    Node* temp = REMOVEDUPLICATES(head);//RemoveDuplicates(head);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
