#include<iostream>
using namespace std;

class node{
public:
int data;
node *next;
node(int data){
this->data=data;
next=nullptr;
}
};

node *takeinput() {
    int data;
    cin>>data;
    node *newnode = new node(data);
    node *head = NULL;
    node *tail = NULL;
    while(data != -1) {
         node *newnode = new node(data);
        if(head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = tail->next;
        }
        tail->next = head;
        cin>>data;
    }
    return head;
}

void print(node *head) {
    node *temp = head;
    if(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp != NULL && temp != head) {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}

int main() {
    node *head = takeinput();
    print(head);
    return 0;
}