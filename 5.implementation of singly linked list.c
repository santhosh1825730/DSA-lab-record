Exercise:5   
Date:22-08-25

  Aim:To implement a singly linked list.

  Algorithm: 
1. start 
2. Create nodes dynamically 
3. Link them sequentially 
4. Traverse to display elements 
5. Stop 

Program: 
#include <stdio.h> 
#include <stdlib.h> 
struct node{int data;struct node*next;}; 
int main(){ 
    struct node *head=NULL,*temp,*newnode; 
    for(int i=0;i<3;i++){ 
        newnode=(struct node*)malloc(sizeof(struct node)); 
        scanf("%d",&newnode->data); 
        newnode->next=NULL; 
        if(head==NULL) head=temp=newnode; 
        else{temp->next=newnode;temp=newnode;} 
    } 
    temp=head; 
    while(temp){printf("%d ",temp->data);temp=temp->next;} 
    return 0; 
} 
 
Output: 
10 20 30 
10 20 30 
 
Result : Thus the program that implementation of singly linked list is 
written and executed successfully
