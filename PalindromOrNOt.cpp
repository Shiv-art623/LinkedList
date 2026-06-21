#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node( int i){
        value = i;
        next = NULL;
    }
};

bool PalindromeORnot( Node *head){
      vector <int> v;
        Node *temp = head;
        while(temp){
            v.push_back(temp->value);
            temp = temp->next;
        }

        int left = 0;
        int right = v.size()-1;
        while(left<right){
            if(v[left] != v[right]){
                return false;
            }
            left++;
            right--;
        }
         return true;   
        
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(1);

    if(PalindromeORnot(head))
    cout<<"LL is palindrome"<<endl;
    else
    cout<<"LL is not a Plalindrome";
    

    return 0;


}