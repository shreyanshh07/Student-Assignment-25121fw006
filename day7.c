#include <stdio.h>
// Recursive function to find factorial
long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %lld\n", n, factorial(n));

    return 0;
}



#include <stdio.h>
// Recursive function to find nth Fibonacci term
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci term at position %d = %d\n", n, fibonacci(n));

    return 0;
}



#include <stdio.h>
// Recursive function to find sum of digits
int sumDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumDigits(num));

    return 0;
}



#include <stdio.h>
int reverse = 0;
// Recursive function to reverse a number
int reverseNumber(int n)
{
    if (n == 0)
        return reverse;

    reverse = reverse * 10 + (n % 10);
    return reverseNumber(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", reverseNumber(num));

    return 0;
}