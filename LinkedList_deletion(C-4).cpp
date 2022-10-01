#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
};

void LinkedListTraversal(struct Node *ptr){
  while (ptr!=NULL){
    cout<<"Elements: "<<ptr->data<<"\n";
    ptr=ptr->next;
  }
}

struct Node *deleteByNodeValue(struct Node *head, int value){
  
  struct Node *p=head;
  struct Node *q=p->next;
  
  while (q->next!=value && q->next!=NULL){
    p=p->next;
    q=q->next;
  }
  
  if (q->next==value){
    p->next=q->next;
    free(q);
  }
  
  else if (q->next!=value){
    cout<<"You have reached at the last of the node."<<endl;
    cout<<"The value is not present in the linked list."<<endl;
  }
  
  return head;
}

  
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

    head = deleteByNodeValue(head,67);

    cout << "-----After Deletion-----" << endl;
    LinkedListTraversal(head);
    return 0;
}
