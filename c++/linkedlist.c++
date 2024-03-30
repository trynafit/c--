#include<iostream>
#include<stdlib.h>
using namespace std;

// Define a structure for a node in a linked list
struct node {
    int data;            // Data part of the node
    struct node* next;   // Pointer to the next node in the list
};

// Function to create a new node with a given value
struct node* createnode(int value) {
    // Allocate memory for a new node
    struct node* newnode = new struct node;
    
    // Set the data and next pointer of the new node
    newnode->data = value;
    newnode->next = NULL;
    
    // Return the address of the new node
    return newnode;
}

// Function to insert a new node at the end of the linked list
void insertatend(struct node** head, int value) {
    // Create a new node with the given value
    struct node* newnode = createnode(value);
    
    // Check if memory allocation was successful
    if (newnode == NULL) {
        cerr << "Memory allocation failed";
    }

    // If the list is empty, set the new node as the head
    if (*head == NULL) {
        *head = newnode;
    } else {
        // Traverse the list to find the last node and append the new node
        struct node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
    }
}

// Function to print the elements of the linked list
void printlist(struct node* head) {
    // Traverse the list and print each node's data
    struct node* current = head;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
    cout << "The list has ended" << endl;
}

// Function to free the memory allocated for the linked list
void freelist(struct node* head) {
    // Traverse the list and delete each node
    struct node* current = head;
    while (current != NULL) {
        // Store the next node before deleting the current one
        struct node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

int main() {
    // Initialize the head pointer to NULL
    struct node* tail = nullptr;

    // Insert nodes with values 1 and 2 at the end of the linked list
    insertatend(&tail, 1);
    insertatend(&tail, 2);

    // Print the elements of the linked list
    printlist(tail);

    // Free the memory allocated for the linked list
    freelist(tail);

    // Return 0 to indicate successful execution
    return 0;
}
