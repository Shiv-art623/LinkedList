 #include<bits/stdc++.h>
 using namespace std;
 class Node{
    public:
    int data;
    Node* next;
    Node(int i ){
        data = i;
        next = NULL;
    }
 };
 Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node*curr1 = head1, *curr2 = head2;
        int count1 = 0, count2 = 0;
        while(curr1){
            count1++;
            curr1 = curr1->next;
        }
        while(curr2){
            count2++;
            curr2 = curr2->next;
        }
        curr1 = head1; curr2 = head2;
        while(count1>count2){
            count1--;
            curr1 = curr1->next;
        }
         while(count1<count2){
            count2--;
            curr2 = curr2->next;
        }
         while(curr1 && curr2){
            if(curr1 == curr2)
                return curr1;

            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        return NULL;
    }  
int main(){

    // Common part
    Node* common = new Node(30);
    common->next = new Node(40);
    common->next->next = new Node(50);

    // First Linked List
    Node* head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = common;

    // Second Linked List
    Node* head2 = new Node(15);
    head2->next = common;

    Node* ans = intersectPoint(head1, head2);

    if(ans)
        cout << "Intersection Node = " << ans->data << endl;
    else
        cout << "No Intersection" << endl;

    return 0;
}