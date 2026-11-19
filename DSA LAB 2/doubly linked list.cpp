#include <iostream>
using namespace std;

// Define the structure of a node
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    // Create three nodes dynamically
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // Connect the first node
    head->data = 10;
    head->prev = NULL;
    head->next = second;

    // Connect the second node
    second->data = 20;
    second->prev = head;
    second->next = third;

    // Connect the third node
    third->data = 30;
    third->prev = second;
    third->next = NULL;

    // Forward traversal: start at head
    cout << "Forward Traversal: ";
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Backward traversal: start at last node
    cout << "Backward Traversal: ";
    temp = third;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;

    // Release dynamically allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}
