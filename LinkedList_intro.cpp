#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *next;
node(int data){
  this->data=data;
  next=NULL;
}

};
void print(node *head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
}
int main(){
  node n1(10);
  node *head=&n1;
  node n2(20);
  node n3(30);
  node n4(40);
  n1.next=&n2;
  n2.next=&n3;
  n3.next=&n4;
  print(head);

}
