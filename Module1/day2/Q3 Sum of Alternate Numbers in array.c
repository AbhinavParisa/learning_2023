/*3. Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators*/

#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    int length = sizeof(arr)/sizeof(arr[0]);
    int sum_1,sum_2,sum_3,i,j,k;
    
    // to find sumof alternative elements from a[0]
    for(i=0;i<length;i+=2){
        sum_1 += arr[i];
    }
    printf("The Sum of first alternatives in array is %d",sum_1);
    
    //to find sumof alternative elements from a[1] 
    for(j=1;j<length;j+=2){
        sum_2 += arr[j];
    }
    printf("The sum of Second alternatives in array is %d",sum_2);
    
    //to find sumof alternative elements from a[2]
    for(k=2;k<length;k+=2){
        sum_3 += arr[k];
    }
    printf("The sum of Third alternatives in array is %d",sum_3)
    
    return 0;
}