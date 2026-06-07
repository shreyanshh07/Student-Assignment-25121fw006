#include <stdio.h>
// pattern for pyramid star printing 
int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



#include <stdio.h>
// patter for inverted pyramid star printing 
int main() {
    int i, j, n = 5;

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}



#include <stdio.h>
// pattern for pyramid number printing 
int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {

        
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

      
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

      
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}



#include <stdio.h>
// pattern for pyramid character printing 
int main() {
    int i, j, n = 5;
    char ch;

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c", ch++);
        }
        ch -= 2;
        for(j = 1; j < i; j++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}