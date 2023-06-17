#include <stdio.h>
/*5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/

#include <math.h>

int findLargestNumber(int num);

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}

int findLargestNumber(int num) {
    int largestNumber = 0;

    for (int i = 0; i < 4; i++) {
        int temp = num / (int)pow(10, i + 1) * (int)pow(10, i) + num % (int)pow(10, i);
        if (temp > largestNumber) {
            largestNumber = temp;
        }
    }

    return largestNumber;
}