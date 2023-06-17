/*2. Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting*/





#include<stdio.h> // Header file for preprocessing
void swap(void* a,void*b,size_t size){  //Function to perform Swapping
    char* temp = (char*)malloc(size);
    memcpy(temp,a,size);
    memcpy(a,b,size);
    memcpy(b,temp,size);
    free(temp);
}
int main(){ // Declaration of main function
    
    //Swapping of int datatype
    int a = 11, b = 9;
    printf("Before Swapping : a = %d , b = %d",a,b);
    swap(&a,&b,sizeof(int));
    printf("After Swapping : a = %d , b = %d",a,b);
    
    //Swapping of Float datatype
    float c = 1.9, d = 2.2;
    printf("Before Swapping : c = %.2f, d = %.2f",c,d);
    swap(&c,&d,sizeof(float));
    printf("After Swapping : c = %.2f, d = %.2f",c,d);
    
    //Swapping of Character datatype
    char ch1 = 'A', ch2 = 'B';
    printf("Before Swapping : ch1 = %c, ch2 = %c",ch1,ch2);
    swap(&ch1,&ch2,sizeof(char));
    printf("After Swapping : ch1 = %c, ch2 = %c",ch1,ch2);
    
    return 0;
}