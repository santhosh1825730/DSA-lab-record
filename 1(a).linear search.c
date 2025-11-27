Exercise: 1(A)  
Date:08-08-25
Aim: To find the element in an array using linear search 

Algorithm: 
1. Start 
2. Read n and array elements 
3. Read search element key 
4. Traverse array and compare each element with key 
5. If found, print position and stop 
6. Else print “Not found” 
7. Stop 

Program: 
#include <stdio.h> 
int main() { 
int n, key, i, flag = 0; 
scanf("%d", &n); 
int a[n]; 
for(i=0;i<n;i++) scanf("%d", &a[i]); 
scanf("%d", &key); 
for(i=0;i<n;i++) { 
if(a[i]==key) { 
printf("Found at position %d", i+1); 
flag=1; 
break; 
} 
} 
if(!flag) printf("Not found"); 
return 0; 
} 
Output: 
5 10 20 30 40 50 
30 Found at position 3 
Result: 
Thus, a program that finds the element in an array using linear search 
is written and executed successfully
  
