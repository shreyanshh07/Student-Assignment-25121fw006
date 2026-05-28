#include <stdio.h>
// sum of first n natural numbers 
int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}

#include <stdio.h>
// multiplication table of a number 
int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication Table of %d:\n", n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}


#include <stdio.h>
// factorial of a number
int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld", n, factorial);

    return 0;
}

#include <stdio.h>
// count number of a digit of a given number 
int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        n = n / 10;
        count++;
    }

    printf("Total digits = %d", count);

    return 0;
}
