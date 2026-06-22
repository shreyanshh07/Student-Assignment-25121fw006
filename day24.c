#include <stdio.h>
#include <string.h>
// program to checK string rotation  
int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return 0;

    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations of each other\n");

    return 0;
}



#include <stdio.h>
#include <string.h>
// program to compress a string
int main() {
    char str[100];
    int i, count;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for(i = 0; i < len; i++) {
        count = 1;

        while(i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");

    return 0;
}




#include <stdio.h>
#include <string.h>
// program to find the longest word 
int main() {
    char str[200], longest[50];
    int i = 0, len = 0, maxLen = 0;
    char word[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[len++] = str[i];
        } else {
            word[len] = '\0';

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            len = 0;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}




#include <stdio.h>
#include <string.h>
// program to remove duplicate characters from a string 
int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for(i = 0; i < len; i++) {
        for(j = i + 1; j < len; j++) {
            if(str[i] == str[j]) {
                for(k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;
                j--;
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}