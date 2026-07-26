#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int x){
   Node* newnode = new Node();
   newnode-> data = x;
   newnode-> next = top;
   top = newnode;
   cout<< x <<" pushed into stack\n";
}

void pop(){
    if(top == NULL){
        cout<< "Stack underflow\n";
        return;
    }
    Node* temp = top;
    cout << temp-> data <<" popped from stack\n";
    top = top -> next;
    delete temp;
}

void peek(){
    if(top == NULL){
        cout<<"Stack is empty\n";
        return;
   }
   else
   cout<<"Top element is "<< top->data << endl;
}

void display(){
    if(top == NULL){
        cout<<" stack is empty\n";
        return;
    }
    Node* temp = top;
    cout<<"Stack elements: ";
    while (temp!= NULL)
    {
        cout<< temp ->data<<" ";
        temp= temp->next;
    }
    cout<< endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    peek();
    return 0;
}


