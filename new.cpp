#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;        // Stores data
    Node* next;      // Pointer to next node
};

// Head pointer
Node* head = NULL;

// Insert at beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete from beginning
void deleteFromBeginning() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Display list
void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtEnd(30);
    insertAtEnd(40);

    cout << "Linked List: ";
    display();

    deleteFromBeginning();
    cout << "After deletion: ";
    display();

    return 0;
}
