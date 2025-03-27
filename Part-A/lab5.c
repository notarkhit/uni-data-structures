#include <stdio.h>

int binaryToDecimal(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + 2 * binaryToDecimal(n / 10);
}

int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    int decimal = binaryToDecimal(binary);
    printf("Decimal equivalent: %d\n", decimal);
    
    return 0;
}

