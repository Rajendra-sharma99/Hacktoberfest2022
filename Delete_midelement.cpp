#include<bits/stdc++.h>
using namespace std;

Node* deleteMid(Node* head)
{
    if(head==NULL) return head;
     if(head->next==NULL) return head;
    Node *low=head;
    Node *high=head;
    while(high->next && high){
        low=low->next;
        high=high->next->next;
    }
    Node *temp=head;
    while(temp->next!=low){
        temp=temp->next;
    }
    return low;
}
