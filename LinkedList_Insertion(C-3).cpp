#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr){

    while (ptr != NULL){
        cout << "Elements: " << ptr->data << "\n";
        ptr = ptr->next;
    }

}

struct Node *InsertAtLast(struct Node *head, int data){

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;    // p starts from head

    // Loop continues till it reached p->next==NULL
    while (p->next != NULL){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
};

int main(){

    // Good Coding Practice
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    struct Node *fifth = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 34;
    head->next = second;

    second->data = 89;
    second->next = third;

    third->data = 99;
    third->next = fourth;

    fourth->data = 0;
    fourth->next = fifth;

    fifth->data = 99;
    fifth->next = NULL;
    LinkedListTraversal(head);

    cout << "After Insertion of data in LinkedList" << endl;

    head = InsertAtLast(head, 111111);
    LinkedListTraversal(head);

    return 0;
}
