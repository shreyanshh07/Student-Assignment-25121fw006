#include <stdio.h>
// program to find the first non-repeating character in a string 
int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count = 0;

        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}





#include <stdio.h>
// program to find the first repeating character in a string 
int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                printf("First repeating character: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found.\n");

    return 0;
}




#include <stdio.h>
#include <string.h>
// program to check if two strings are Anagrams
int main() {
    char str1[100], str2[100];
    int i, j, len1, len2, temp;
    
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2) {
        printf("Strings are not Anagrams.\n");
        return 0;
    }

    for(i = 0; i < len1 - 1; i++) {
        for(j = i + 1; j < len1; j++) {
            if(str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    for(i = 0; i < len2 - 1; i++) {
        for(j = i + 1; j < len2; j++) {
            if(str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(strcmp(str1, str2) == 0)
        printf("Strings are Anagrams.\n");
    else
        printf("Strings are not Anagrams.\n");

    return 0;
}



#include <stdio.h>
// program to find the maximum occurring character in a string 
int main() {
    char str[100];
    int i, j, count, maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count = 0;

        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", maxCount);

    return 0;
}