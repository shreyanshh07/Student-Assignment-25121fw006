#include <stdio.h>
// convert decimal to binnary 
int main() {
    int decimal, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}


#include <stdio.h>
// convert binary t decimal 
int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}



#include <stdio.h>
// count number of sets bits in a number
int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        count += num % 2;
        num = num / 2;
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}



#include <stdio.h>
// calculate x^n using loop 
int main() {
    int x, n, result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d^%d = %d\n", x, n, result);

    return 0;
}