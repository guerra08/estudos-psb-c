#include <stdio.h>
#include <stdlib.h>

struct NODE{
    int val;
    struct NODE *left;
    struct NODE *right;
}NODE;

void preOrder(struct NODE *r);
void preOrder(struct NODE *r){
    if(r != NULL){
        preOrder(r->left);
        printf("%d - ",r->val);
        preOrder(r->right);
    }
}

void postOrder(struct NODE *r);
void postOrder(struct NODE *r){
    if(r != NULL){
        preOrder(r->left);
        preOrder(r->right);
        printf("%d - ",r->val);
    }
}

void inOrder(struct NODE *r);
void inOrder(struct NODE *r){
    if(r != NULL){
        printf("%d - ",r->val);
        preOrder(r->left);
        preOrder(r->right);
    }
}

void countAndSum(struct NODE *node, int *count, int *sum);
void countAndSum(struct NODE *node, int *count, int *sum){
    if (node==NULL) return;
    (*count)++;
    int v = node->val;
    (*sum) += v;
    countAndSum(node->left, count, sum);
    countAndSum(node->right, count, sum);
}

int main(){

    struct NODE* root = malloc(sizeof(struct NODE));
    root->left=NULL;
    root->right=NULL;
    root->val=5;

    struct NODE* first = malloc(sizeof(struct NODE));
    first->left=NULL;
    first->right=NULL;
    first->val=2;

    struct NODE* second = malloc(sizeof(struct NODE));
    second->left=NULL;
    second->right=NULL;
    second->val=13;

    root->left = first;
    root->right = second;

    int c = 0;
    int s = 0;

    countAndSum(root,&c,&s);

    printf("%d\n", c);
    printf("%d\n", s);

    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    inOrder(root);

    free(root); 
    free(first); 
    free(second); 

    return 0;
}