#include <stdio.h>
// program to read and print an array of 5 integers 
int main() {
    int arr[5];
    int i;
 
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



#include <stdio.h>
// program to calculate the sum and average of an array of 5 integers 
int main() {
    int arr[5], i, sum = 0;
    float avg;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}




#include <stdio.h>
// program to find the largest and smallest element in an array of 5 integers 
int main() {
    int arr[5], i;
    int largest, smallest;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}





#include <stdio.h>
// program to count the number of even and odd elements in an array of 5 integers 
int main() {
    int arr[5], i;
    int even = 0, odd = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);

    return 0;
}