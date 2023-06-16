4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.

#include<stdio.h>
int main(){
    int operand1,operand2;
    char operator;
    printf("enter anyone of the operators to perform respective operation");//giving or selecting the required arithmetic operation
    scanf("%s",&operator);
    printf("Enter the value of operand1");
    scanf("%d",&operand1);
    printf("Enter the value of operand2");
    scanf("%d",&operand2);
    switch(operator){
        case '+':
        printf("the output is %d+%d = %d",operand1,operand2,operand1+operand2);
        break;
        case '-':
        printf("the output is %d-%d = %d",operand1,operand2,operand1-operand2);
        break;
        case '*':
        printf("the output is %d*%d = %d",operand1,operand2,operand1*operand2);
        break;
        case '/':
        printf("the output is %d/%d = %d",operand1,operand2,operand1/operand2);
        break;
        default:
        printf("please enter valid operator");
    }
    return 0;
}
