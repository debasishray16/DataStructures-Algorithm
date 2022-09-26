#include <iostream>
using namespace std;


//Definition of linked list.
struct node{
    int data;
    struct node *next;
};

int main(){
    
    //Allocated memory for nodes in linked list in heap.
    //Creation of Head
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    
    //Creation of second node
    struct node *secondNode;
    secondNode=(struct node*)malloc(sizeof(struct node));
    
    //Creation of third node
    struct node *thirdNode;
    thirdNode=(struct node*)malloc(sizeof(struct node));
    
    //Linking of head node to second node.
    head->data=7;
    head->next=secondNode;
    
    //Linking of second node to third node.
    secondNode->data=67;
    secondNode->next=thirdNode;
    
    //Terminate the list at the third node.
    thirdNode->data=56;
    thirdNode->next=NULL;
    
    
    return 0;
}
