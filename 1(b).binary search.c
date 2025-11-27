Exercise: 1(B)  
Date:08-08-25 

Aim: To search an element in a sorted array using binary search. 

  Algorithm: 
1. Start 
2. Input sorted array and key 
3. Set low=0, high=n-1 
4. Repeat while low<=high 
5. Find mid=(low+high)/2 
6. If a[mid]==key, print found 
7. If a[mid]>key, set high=mid-1, else low=mid+1 
8. Stop

program:
#include <stdio.h> 
int main() { 
    int n, key, i, low, high, mid, flag=0; 
    scanf("%d", &n); 
    int a[n]; 
    for(i=0;i<n;i++) scanf("%d", &a[i]); 
    scanf("%d", &key); 
    low=0; high=n-1; 
    while(low<=high) { 
        mid=(low+high)/2; 
        if(a[mid]==key) { 
            printf("Found at position %d", mid+1); 
            flag=1; 
            break; 
        } else if(a[mid]>key) 
            high=mid-1; 
        else 
            low=mid+1; 
    } 
    if(!flag) printf("Not found"); 
    return 0; 
} 
 
Output: 
10 20 30 40 50 
40 
Found at position 4 
 
Result: Thus, a program that searches an element in a sorted array 
using binary search is written and executed successfully
