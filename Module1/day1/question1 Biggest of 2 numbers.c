1. Write a function to find biggest of 2 numbers using
   - if else
   - Ternary operator

//If Else

#include <stdio.h>// Header file for preprocessing
int greatestnumber(int x,int y)//function declaration for finding the greatest number
{
    if(x>y)
    {
        return x;
    }
    else{
        return y;
    }
    if(x==y){
        return 0;
    }
}
int main() { //main function to get the result to find the greatest number
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("The greatest number is %d",greatestnumber(a,b));
    return 0;
}

//Ternary Operator
#include <stdio.h>// Header file for preprocessing
int main() {//main function to get the result to find the greatest number
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    (a>b)? printf("the greatest number is %d",a):printf("the greatest number is %d",b);
    return 0;
}