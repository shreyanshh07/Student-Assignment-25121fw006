#include <stdio.h>
//  program to Create student record system using arrays and strings.  
int main() {
    int roll[100], marks[100], n, i, choice, searchRoll;
    char name[100][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Display All Records\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nRoll No\tName\tMarks\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\n",
                           roll[i],
                           name[i],
                           marks[i]);
                }
                break;

            case 2:
                printf("Enter Roll No to search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++) {
                    if(roll[i] == searchRoll) {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);
                        break;
                    }
                }

                if(i == n) {
                    printf("Student not found!\n");
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





#include <stdio.h>
// program to Create mini library system. 
int main() {
    int bookId[100], issued[100];
    char bookName[100][50];
    int n, i, choice, searchId;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Name: ");
        scanf("%s", bookName[i]);

        issued[i] = 0;   // 0 = Available, 1 = Issued
    }

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display Books\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nID\tBook Name\tStatus\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\n",
                           bookId[i],
                           bookName[i],
                           issued[i] ? "Issued" : "Available");
                }
                break;

            case 2:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(bookId[i] == searchId) {
                        if(issued[i] == 0) {
                            issued[i] = 1;
                            printf("Book issued successfully.\n");
                        } else {
                            printf("Book is already issued.\n");
                        }
                        break;
                    }
                }

                if(i == n)
                    printf("Book not found.\n");
                break;

            case 3:
                printf("Enter Book ID to return: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(bookId[i] == searchId) {
                        if(issued[i] == 1) {
                            issued[i] = 0;
                            printf("Book returned successfully.\n");
                        } else {
                            printf("Book is already available.\n");
                        }
                        break;
                    }
                }

                if(i == n)
                    printf("Book not found.\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}




#include <stdio.h>
//  program to Create mini employee management system
int main() {
    int empId[100], salary[100];
    char empName[100][50];
    int n, i, choice, searchId;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf("%s", empName[i]);

        printf("Salary: ");
        scanf("%d", &salary[i]);
    }

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nID\tName\tSalary\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\n",
                           empId[i],
                           empName[i],
                           salary[i]);
                }
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("ID     : %d\n", empId[i]);
                        printf("Name   : %s\n", empName[i]);
                        printf("Salary : %d\n", salary[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Employee not found!\n");
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(empId[i] == searchId) {
                        printf("Enter New Salary: ");
                        scanf("%d", &salary[i]);
                        printf("Salary updated successfully.\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Employee not found!\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}





#include <stdio.h>
//  program to Develop complete mini project using arrays, strings and functions
int roll[100], marks[100], n;
char name[100][50];

// Function to add student records
void addStudents() {
    int i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
}

// Function to display records
void displayStudents() {
    int i;

    if(n == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\nRoll No\tName\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

// Function to search a student
void searchStudent() {
    int i, r;

    printf("Enter Roll No to search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %d\n", marks[i]);
            return;
        }
    }

    printf("Student not found.\n");
}

// Function to update marks
void updateMarks() {
    int i, r;

    printf("Enter Roll No: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("Enter New Marks: ");
            scanf("%d", &marks[i]);
            printf("Marks updated successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
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