#include <stdio.h>
// check that number is perfect or not
int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num)
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}



#include <stdio.h>
// check that number is strong or not 
int main() {
    int num, temp, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        rem = temp % 10;

        fact = 1;
        for(i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}



#include <stdio.h>
// find factors of a number 
int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}



#include <stdio.h>
// find largest prime factor of a number
int main() {
    int num, i, largestPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) {
        while(num % i == 0) {
            largestPrime = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}