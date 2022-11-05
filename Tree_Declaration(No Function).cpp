#include <iostream>
using namespace std;


struct Node {
    struct Node *left;
    int data;
    struct Node *right; 
};


int main(){

    struct Node *root_node;
    struct Node *first_node;
    struct Node *second_node;

    // Node Creation
    root_node = (struct Node *)malloc(sizeof(struct Node));
    first_node = (struct Node *)malloc(sizeof(struct Node));
    second_node = (struct Node *)malloc(sizeof(struct Node));

    // Node connection
    root_node->left=first_node;
    root_node->right=second_node;

    first_node->left=NULL;
    first_node->right=NULL;

    second_node->left=NULL;
    second_node->right=NULL;

    return 0;
}
