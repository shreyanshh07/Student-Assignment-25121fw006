#include <stdio.h>
// program to merge two sorted arrays
int main() {
    int n1, n2, i, j, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    i = 0;
    j = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while(i < n1) {
        merged[k++] = arr1[i++];
    }

    while(j < n2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}




#include <stdio.h>
#include <string.h>
// program to find common characters in strings
int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Common characters are: ");

    for(i = 0; str1[i] != '\0'; i++) {
        for(j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}



#include <stdio.h>
#include <string.h>
// program to sort names in alphabetical order
int main() {
    int n, i, j;
    char names[50][100], temp[100];

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}





#include <stdio.h>
#include <string.h>
// program to sort word by length
int main() {
    int n, i, j;
    char words[50][100], temp[100];

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort words by length
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}