#include <stdio.h>
// program to create menu-driven calculator
int main() {
    int choice;
    float a, b, result;

    do {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;

            case 5:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}





#include <stdio.h>
// program to create menu-driven array operations system
int main() {
    int arr[100], n, i, choice, value, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n----- MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);

                if(pos >= 1 && pos <= n + 1) {
                    for(i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Invalid Position!\n");
                }
                break;

            case 3:
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);

                if(pos >= 1 && pos <= n) {
                    for(i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                } else {
                    printf("Invalid Position!\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < n; i++) {
                    if(arr[i] == value) {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }

                if(i == n) {
                    printf("Element not found.\n");
                }
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}





#include <stdio.h>
#include <string.h>
//  program to Create menu-driven string operations system. 
int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str1);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter another string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                printf("Enter another string: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 5:
                strcpy(str2, str1);
                strrev(str2);
                printf("Reversed String = %s\n", str2);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}




#include <stdio.h>
//  program to Create inventory management system. 
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n, i, choice, searchId;

    printf("Enter number of items: ");
    scanf("%d", &n);

    // Input item details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Price: ");
        scanf("%f", &item[i].price);
    }

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Items\n");
        printf("2. Search Item by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nID\tName\tQuantity\tPrice\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
                break;

            case 2:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(item[i].id == searchId) {
                        printf("\nItem Found!\n");
                        printf("ID       : %d\n", item[i].id);
                        printf("Name     : %s\n", item[i].name);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                        break;
                    }
                }

                if(i == n) {
                    printf("Item not found!\n");
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}