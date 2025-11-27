Exercise:4  
Date:22-08-25

Aim:To implement a queue using an array.

Algorithm: 
1. start 
2. Initialize front=0, rear=-1 
3. Enqueue inserts at rear 
4. Dequeue removes from front 
5. Stop   

Program: 
#include <stdio.h> 
#define MAX 5 
int queue[MAX], front=0, rear=-1; 
void enqueue(int x){ if(rear<MAX-1) queue[++rear]=x; } 
void dequeue(){ if(front<=rear) front++; } 
void display(){ for(int i=front;i<=rear;i++) printf("%d ",queue[i]); } 
int main(){ 
    enqueue(10); enqueue(20); enqueue(30); 
    display(); 
    printf("\n"); 
    dequeue(); 
    display(); 
    return 0; 
} 
 
Output: 
10 20 30  
20 30 
 
Result:Thus the program that implementation of queue using array is 
written and executed successfully 
 
 
