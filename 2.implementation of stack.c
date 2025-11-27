Exercise: 2  
Date:16-08-25 

  Aim: To implement stack using array. 

Algorithm: 
1. Start 
2. Initialize top = -1 
3. Push adds element if not full 
4. Pop removes element if not empty 
5. Display prints all elements 
6. Stop 

Program: 
#include <stdio.h> 
#define MAX 5 
int stack[MAX], top=-1; 
void push(int x){ if(top<MAX-1) stack[++top]=x; } 
void pop(){ if(top>=0) top--; } 
void display(){ for(int i=top;i>=0;i--) printf("%d ",stack[i]); } 
int main(){ 
    push(10); push(20); push(30); 
    display(); 
    pop(); 
    printf("\n"); 
    display(); 
    return 0; 
} 
 
Output: 
30 20 10  
20 10 
 
Result: Thus , a program that implements stack using array is written 
and executed successfully
