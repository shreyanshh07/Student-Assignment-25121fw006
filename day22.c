#include <stdio.h>
#include <string.h>
// program to check palindrome string 
int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}



#include <stdio.h>
// program to count the number of words in a string
int main() {
    char str[200];
    int i = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] == ' ' || str[i] == '\n')
            words++;
        i++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}



#include <stdio.h>
// program to find the frequency of a character in a string 
int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}



#include <stdio.h>
// program to remove spaces from a string 
int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String after removing spaces: %s", str);

    return 0;
}