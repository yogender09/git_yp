#include<stdio.h>

struct node {
    int data;
    int level;
    struct node *left;
    struct node *right;
};

struct node *root;

struct node *new_node(int data){
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return (new);
}

struct node *bst_add(int data){
struct node *new = new_node(data);
if(root){
} else {

}
}
