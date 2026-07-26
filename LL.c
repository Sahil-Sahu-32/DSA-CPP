#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

 struct node *head  = NULL;

void insertBigin(int x){
    struct node* newnode = malloc(sizeof(struct node));
    newnode ->data = x;
    newnode ->next = head;
    head = newnode;
}


void insertEnd(int x){

    struct node* newnode = malloc(sizeof(struct node));
    newnode ->data = x;
    newnode ->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    
    struct node* temp = head;
    while (temp ->next != NULL)
    {
        temp = temp-> next;
        
    }
    temp->next = newnode;
    
    
}



int main(){


    return 0;
}