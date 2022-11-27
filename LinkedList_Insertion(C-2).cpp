#include <iostream>
using namespace std;


//Declaration of Linked-list
struct Node{
    int data;
    struct Node *next;
};


//Function for printing Linked-List
void LinkedListTraversal(struct Node *ptr){
    while (ptr != 0){
        cout << "Elements: " << ptr->data << "\n";
        ptr = ptr->next;
    }
}

struct Node *insertAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *p = head;
    
    
    for (int i=0;i<index-1;i++){
        p=p->next;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}

int main()
{

    //Declaration of 10 Linked List
    struct Node *head = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *sixth = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *seventh = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *eighth = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *ninth = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *tenth = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *tail = (struct Node *)malloc(sizeof(struct Node *));

    // Data Linkage
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = sixth;
    sixth->data = 6;
    sixth->next = seventh;
    seventh->data = 7;
    seventh->next = eighth;
    eighth->data = 8;
    eighth->next = ninth;
    ninth->data = 9;
    ninth->next = tenth;
    tenth->data = 10;
    tenth->next = NULL;

    // Before Insertion
    LinkedListTraversal(head);

    cout << "-------------------------------------------"<< "\n";

    cout << "New Linked List" << endl;
    head = insertAtIndex(head, 55, 5);

    // After Insertion
    LinkedListTraversal(head);
    return 0;
}
