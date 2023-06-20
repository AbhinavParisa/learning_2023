//Coversion of string to integer

/* Example string "abhi" to integer
a' - '0' = 97 - 48 = 49
'b' - '0' = 98 - 48 = 50
'h' - '0' = 104 - 48 = 56
'i' - '0' = 105 - 48 = 57
as per program 
Accumulation starts with 0: result = 0
1st iteration: result = result * 10 + 49 = 0 * 10 + 49 = 49
2nd iteration: result = result * 10 + 50 = 49 * 10 + 50 = 490 + 50 = 540
3rd iteration: result = result * 10 + 56 = 540 * 10 + 56 = 5400 + 56 = 5456
4th iteration: result = result * 10 + 57 = 5456 * 10 + 57 = 54560 + 57 = 54617*/


#include <stdio.h>
int stringToInteger(const char* str) {
    int res = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        int ival = str[i] - '0';
        res = res * 10 + ival;
        i++;
    }
    
    return res;
}
int main() {
    const char str[] = "abhi";
    int value = stringToInteger(str);
    
    printf("Input String: %s\n", str);
    printf("Converted Integer: %d\n", value);
    
    return 0;
}