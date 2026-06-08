#include <stdio.h>
#include <string.h>
// function to check palindrome string 
int palindrome(char str[])
{
    int i, len;
    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
            return 0;  
    }
    return 1;          
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if(palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}





#include <stdio.h>
#include <math.h>
// function to check armstrong number 
int armstrong(int num)
{
    int temp, rem, sum = 0, digits = 0;

    temp = num;

    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}





#include <stdio.h>
// function to print fibonacci series 
void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}




#include <stdio.h>
// function to check perfect number 
int perfectNumber(int num)
{
    int i, sum = 0;

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(perfectNumber(num))
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}