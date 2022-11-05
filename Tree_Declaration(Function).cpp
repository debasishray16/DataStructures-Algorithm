#include <iostream>
using namespace std;

struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
};


// Node Creation Function
struct Node *createNode(int data){
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->left=NULL;
    n->right=NULL;
    n->data=data;
    return n;
};


int main()
{

    struct Node *root_node=createNode(34);
    struct Node *first_node=createNode(99);
    struct Node *second_node=createNode(57);


    // Node connection
    root_node->left = first_node;
    root_node->right = second_node;

    return 0;
}
