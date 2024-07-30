#include <bits/stdc++.h>
using namespace std;

// Define the Node structure
struct Node {
    int data; // The data stored in the node
    Node* next; // Pointer to the next node
};

int main()
{

    // Initialize the head of the list
    Node* head = nullptr;

    // Create new nodes and add them to the list
    for (int i = 1; i <= 5; i++) {
        Node* newNode = new Node();
        newNode->data = i; // Replace i with the actual data
        newNode->next = nullptr;

        // Link the nodes
        if (head == nullptr) {

            // The list is empty, so  ntheew node is the
            // head of the list
            head = newNode;
        }
        else {

            // The list is not empty, traverse the list to
            // find the last node
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }

            // Now temp points to the last node, link the
            // new node
            temp->next = newNode;
        }
    }

    // Print the list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free up the memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
