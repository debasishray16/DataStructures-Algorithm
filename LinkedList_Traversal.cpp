#include <iostream>
using namespace std;

// Definition of linked list.
struct node
{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element:" << ptr->data << "\n";
        // address part will point to another data of next node and will print value.
        ptr = ptr->next;
    }
}

int main()
{

    // Allocated memory for nodes in linked list in heap.
    // Creation of Head
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));

    // Creation of second node
    struct node *secondNode;
    secondNode = (struct node *)malloc(sizeof(struct node));

    // Creation of third node
    struct node *thirdNode;
    thirdNode = (struct node *)malloc(sizeof(struct node));

    // Linking of head node to second node.
    head->data = 7;
    head->next = secondNode;

    // Linking of second node to third node.
    secondNode->data = 67;
    secondNode->next = thirdNode;

    // Terminate the list at the third node.
    thirdNode->data = 56;
    thirdNode->next = NULL;

    // Starts from the head part.
    LinkedListTraversal(head);
    return 0;
}
