#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// creation of node class 
class node{
  public:
    int data;
    node* next;
};

node* first;


// CREATION FUNCTION STARTS HERE! 

void creation(){
  node* ptr = new node;
  int n;
  cout<<"enter the range to which you wanna enter elements"<<endl;
  cin>>n;

  cout<<"enter first data:"<<endl;
  cin>>ptr->data;
  first = ptr;

  for(int i=1;i<n;i++){
    node* cpt = new node;
    cout<<"enter new data"<<endl;
    cin>>cpt->data;
    ptr->next=cpt;
    ptr = cpt;
    }
  ptr->next = NULL;
}

// TRAVERSAL FUNCTION STARTS HERE!

void traversal(){
  node* ptr = first;
  while(ptr!=NULL){
    cout<<ptr->data<<" | ";
    ptr = ptr->next;
  }
}


// REVERSAL OF A COMPLETE LINKED LIST

void reverse(){
  node* ptr = first;
  node* cpt = first->next;
  node* previous = NULL;

  while(ptr!=NULL){
    ptr->next = previous;
    previous= ptr;
    ptr = cpt;
    cpt = cpt->next;
  }
}


int main(){
  creation();
  traversal();
  cout<<endl;
  
  cout<<"After Reversal :"<<endl;
  reverse();
  traversal();

  return 0;
}