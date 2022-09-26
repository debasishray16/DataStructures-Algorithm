#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Elements: " << ptr->data << "\n";
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    // To create empty space in heap.
    // The memory is allocated dynamicallly.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    // ptr is new node.Next is linkage to another node.
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()
{

    struct Node *head, *second, *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //Data
    head->data = 34;
    second->data = 98;
    third->data = 67;

    // Linkage
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Before Inserting Value.
    LinkedListTraversal(head);

    // head gets changed after entering value from beginning.
    head = insertAtFirst(head, 79);

    // After Inserting Value.
    LinkedListTraversal(head);

    return 0;
}
