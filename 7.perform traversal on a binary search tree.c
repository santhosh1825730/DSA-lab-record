Exercise:7  
Perform Traversal on a Binary Search Tree 
Date:05-09-25

Aim:  To create and traverse a Binary Search Tree.

Algorithm: 
1. Start 
2. Insert elements following BST rule 
Perform inorder traversal 
3. Stop

Program: 
#include <stdio.h> 
#include <stdlib.h> 
struct node{int data;struct node*left,*right;}; 
struct node*insert(struct node*r,int val){ 
    if(r==NULL){r=(struct node*)malloc(sizeof(struct 
node));r->data=val;r->left=r->right=NULL;} 
    else if(val<r->data)r->left=insert(r->left,val); 
    else r->right=insert(r->right,val); 
    return r; 
} 
void inorder(struct node*r){if(r){inorder(r->left);printf("%d 
",r->data);inorder(r->right);}} 
int main(){ 
    struct node*root=NULL;int n,x; 
    scanf("%d",&n); 
    for(int i=0;i<n;i++){scanf("%d",&x);root=insert(root,x);} 
    inorder(root); 
    return 0; 
} 
 
Output: 
  
40 20 60 10 30 
10 20 30 40 60 
 
Result: Thus , a program that performs creation and traversion in a 
Binary Search Tree is written and executed successfully
