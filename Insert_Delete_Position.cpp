#include<bits/stdc++.h>
using namespace std;

class Node{
     public:
     int data;
     Node *next;
     Node(int data){
     this->data=data;
       next=NULL;
     }
};

Node *takeinput(){
     int data;
     cin>>data;
     Node *head=NULL;
     while(data!=-1){
        Node *newnode=new Node(data);
        if(head==NULL){
          head=newnode;
        }else{
            Node * temp=head;
            while(temp->next!=NULL){
              temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
     }
     return head;
}


Node *print(Node *head){
	Node *temp=head;
	while(temp!=NULL){
	     cout<<temp->data<<" ";
	     temp=temp->next;
	}
}


Node *insert(int i, int data, Node * head){
	Node * newnode=new Node(data);
	if(i==0){
	newnode->next=head;
	head=newnode;
	return head;
	}else{
	    Node *temp=head;
	    int count=0;
	    while(temp!=NULL && count<i-1){
	       temp=temp->next;
	       count++;
	    }if(temp!=NULL){
	       Node *a=temp->next;
	       temp->next=newnode;
	       newnode->next=a;
	    }
	    return head;

	}
}


   Node *deleteelement(Node * head, int i){
       if(i==0){
            Node* temp=head;
        head=head->next;
         delete(temp);
} else{
    int count=0;
    Node * temp=head;
     while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
     }
     Node *del=temp->next;
     temp->next=temp->next->next;
     delete(del);
     return head;
}

}


      int main()
   {
        cout<<"Enter the value for insertion:";
        Node *head=takeinput();    // for data input in a linked list
        print(head);
        int i,data;
        cout<<endl<<"Enter the value i and data for insertion:";
        cin>>i>>data;
        head=insert(i,data,head);  // for data insertionm in alinked list in a particular index
        print(head);
        cout<<endl<<"Enter the value i for data for deletion:";
        cin>>i;
        head=deleteelement(head,i);  //  for data deletion in a particular point
        print(head);
   }
