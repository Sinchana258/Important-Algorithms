#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};

// Insert into sorted linked list
Node *insertSorted(Node *head, int val)
{
    Node *newNode = new Node(val);

    // Case 1: Empty list or insert at head
    if (head == NULL || val < head->data)
    {
        newNode->next = head;
        return newNode; // new node becomes new head
    }

    // Case 2: Traverse to find correct position
    Node *curr = head;
    while (curr->next != NULL && curr->next->data < val)
    {
        curr = curr->next;
    }

    // Insert after curr
    newNode->next = curr->next;
    curr->next = newNode;

    return head; // head unchanged
}

// Utility to print the list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create a sorted list: 10 -> 20 -> 30
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original list: ";
    printList(head);

    head = insertSorted(head, 25);
    head = insertSorted(head, 5);
    head = insertSorted(head, 40);

    cout << "After insertions: ";
    printList(head);

    return 0;
}
