#include <stdio.h>
// fibonacci series
int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}



#include <stdio.h>
// nth fibonacci term 
int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Nth Fibonacci term = %lld", first);
    else if (n == 2)
        printf("Nth Fibonacci term = %lld", second);
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Nth Fibonacci term = %lld", second);
    }

    return 0;
}



#include <stdio.h>
// check if a number is armstrong number or not
int main() {
    int num, originalNum, remainder;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong Number", originalNum);
    else
        printf("%d is not an Armstrong Number", originalNum);

    return 0;
}


#include <stdio.h>
// print all armstrong numbers between two numbers 
int main() {
    int start, end, num, temp, rem, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while(temp != 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}