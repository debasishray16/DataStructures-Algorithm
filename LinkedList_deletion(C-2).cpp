#include <iostream>
using namespace std;


struct Node {
    int data;
    struct Node *next;
};


void LinkedListTraversal(struct Node *ptr){
    while (ptr != 0)
    {
        cout << "Elements: " << ptr->data << "\n";
        ptr = ptr->next;
    }
}


struct Node *deleteAtIndex(struct Node *head, int index){

    struct Node *p = head;
    struct Node *q = p->next; // This means that q pointer is at the next node as compared to p pointer.

    for (int i = 0; i < index - 1; i++){
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
};


int main(){

    struct Node *head, *second, *third, *fourth, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));

    // Data
    head->data = 34;
    second->data = 98;
    third->data = 67;
    fourth->data = 99;
    last->data = 99999;

    // Linkage
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = last;
    last->next = NULL;

    cout << "-----Before Deletion-----" << endl;
    LinkedListTraversal(head);

    head = deleteAtIndex(head, 3);

    cout << "-----After Deletion-----" << endl;
    LinkedListTraversal(head);
    return 0;
}
