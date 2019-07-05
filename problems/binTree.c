#include <stdio.h>
#include <stdlib.h>

struct NODE{
    int val;
    struct NODE *left;
    struct NODE *right;
}NODE;

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

    struct NODE* root = (struct NODE *)malloc(sizeof(struct NODE));
    root->left=NULL;
    root->right=NULL;
    root->val=5;

    struct NODE* first = (struct NODE *)malloc(sizeof(struct NODE));
    first->left=NULL;
    first->right=NULL;
    first->val=2;

    struct NODE* second = (struct NODE *)malloc(sizeof(struct NODE));
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

    free(root); 
    free(first); 
    free(second); 

    return 0;
}