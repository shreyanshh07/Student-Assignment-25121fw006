#include <stdio.h>
// program to find the missing number in an array 
int main() {
    int n, i, sum = 0, expectedSum, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}



#include <stdio.h>
// program to find the most frequent element in an array
int main() {
    int n, i, j, count, maxCount = 0, maxElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", maxElement);
    printf("Frequency: %d\n", maxCount);

    return 0;
}



#include <stdio.h>
// program to find a pair with a given sum in an array
int main() {
    int n, i, j, sum, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found with given sum.\n");
    }

    return 0;
}



#include <stdio.h>
// program to remove duplicates from an array
int main() {
    int n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; ) {
            if(arr[i] == arr[j]) {
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}