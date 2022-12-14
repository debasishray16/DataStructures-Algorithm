#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


void LinkedListTraversal(struct  Node *ptr){
    while(ptr!=NULL){
        cout<<"Elements :"<<ptr->data<<"\n";
        ptr = ptr->next;
    }
}

void CountNodes(struct Node *current){
    int count=0;
    while(current!=0){
        count++;        
    }
    cout<<"The no. of nodes:"<<count<<endl;
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    struct Node *fifth = NULL;
    struct Node *tail = NULL;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));
    tail=(struct Node *)malloc(sizeof(struct Node));

    head->data=23;
    head->next=second;

    second->data=45;
    second->next=third;

    third->data=67;
    third->next=fourth;

    fourth->data=35;
    fourth->next=fifth;

    fifth->data=0;
    fifth->next=tail;

    tail->data=99;
    tail->next=NULL;
    LinkedListTraversal(head);
    CountNodes(head);

    return 0;
}
