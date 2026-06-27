#include <stdio.h>
// program to create student program management system 
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice, searchRoll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                printf("\nEnter details of Student %d\n", i + 1);

                printf("Roll Number: ");
                scanf("%d", &s[i].roll);

                printf("Name: ");
                scanf("%s", s[i].name);

                printf("Marks: ");
                scanf("%f", &s[i].marks);
            }
            break;

        case 2:
            printf("\n--- Student Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("\nStudent %d\n", i + 1);
                printf("Roll Number: %d\n", s[i].roll);
                printf("Name: %s\n", s[i].name);
                printf("Marks: %.2f\n", s[i].marks);
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &searchRoll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == searchRoll)
                {
                    printf("\nStudent Found!\n");
                    printf("Roll Number: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    break;
                }
            }

            if (i == n)
            {
                printf("Student not found.\n");
            }
            break;

        case 4:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}





#include <stdio.h>
// program to create employee management system
struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n, i, choice, searchId;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee Records\n");
        printf("2. Display Employee Records\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                printf("\nEnter details of Employee %d\n", i + 1);

                printf("Employee ID: ");
                scanf("%d", &e[i].id);

                printf("Employee Name: ");
                scanf("%s", e[i].name);

                printf("Salary: ");
                scanf("%f", &e[i].salary);
            }
            break;

        case 2:
            printf("\n--- Employee Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("\nEmployee %d\n", i + 1);
                printf("Employee ID: %d\n", e[i].id);
                printf("Employee Name: %s\n", e[i].name);
                printf("Salary: %.2f\n", e[i].salary);
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (e[i].id == searchId)
                {
                    printf("\nEmployee Found!\n");
                    printf("Employee ID: %d\n", e[i].id);
                    printf("Employee Name: %s\n", e[i].name);
                    printf("Salary: %.2f\n", e[i].salary);
                    break;
                }
            }

            if (i == n)
            {
                printf("Employee not found.\n");
            }
            break;

        case 4:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}





#include <stdio.h>
// program to create salary management system
struct Salary
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Salary emp[100];
    int n, i, choice, searchId;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Salary Records\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Employee Salary by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                printf("\nEnter details of Employee %d\n", i + 1);

                printf("Employee ID: ");
                scanf("%d", &emp[i].id);

                printf("Employee Name: ");
                scanf("%s", emp[i].name);

                printf("Basic Salary: ");
                scanf("%f", &emp[i].basic);

                printf("HRA: ");
                scanf("%f", &emp[i].hra);

                printf("DA: ");
                scanf("%f", &emp[i].da);

                emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
            }
            break;

        case 2:
            printf("\n--- Salary Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("\nEmployee ID : %d\n", emp[i].id);
                printf("Employee Name : %s\n", emp[i].name);
                printf("Basic Salary : %.2f\n", emp[i].basic);
                printf("HRA : %.2f\n", emp[i].hra);
                printf("DA : %.2f\n", emp[i].da);
                printf("Gross Salary : %.2f\n", emp[i].gross);
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == searchId)
                {
                    printf("\nEmployee Found!\n");
                    printf("Employee ID : %d\n", emp[i].id);
                    printf("Employee Name : %s\n", emp[i].name);
                    printf("Gross Salary : %.2f\n", emp[i].gross);
                    break;
                }
            }

            if (i == n)
            {
                printf("Employee not found.\n");
            }
            break;

        case 4:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}





#include <stdio.h>
// program to create marksheet generation system
struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
};

int main()
{
    struct Student s;
    int choice;

    do
    {
        printf("\n===== Marksheet Generation System =====\n");
        printf("1. Enter Student Details\n");
        printf("2. Display Marksheet\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s.roll);

            printf("Enter Student Name: ");
            scanf("%s", s.name);

            printf("Enter Marks of 5 Subjects:\n");
            printf("Subject 1: ");
            scanf("%f", &s.m1);

            printf("Subject 2: ");
            scanf("%f", &s.m2);

            printf("Subject 3: ");
            scanf("%f", &s.m3);

            printf("Subject 4: ");
            scanf("%f", &s.m4);

            printf("Subject 5: ");
            scanf("%f", &s.m5);

            s.total = s.m1 + s.m2 + s.m3 + s.m4 + s.m5;
            s.percentage = s.total / 5;

            break;

        case 2:
            printf("\n========== MARKSHEET ==========\n");
            printf("Roll Number : %d\n", s.roll);
            printf("Name        : %s\n", s.name);
            printf("Subject 1   : %.2f\n", s.m1);
            printf("Subject 2   : %.2f\n", s.m2);
            printf("Subject 3   : %.2f\n", s.m3);
            printf("Subject 4   : %.2f\n", s.m4);
            printf("Subject 5   : %.2f\n", s.m5);
            printf("Total Marks : %.2f\n", s.total);
            printf("Percentage  : %.2f%%\n", s.percentage);

            if (s.percentage >= 60)
                printf("Result      : First Division\n");
            else if (s.percentage >= 45)
                printf("Result      : Second Division\n");
            else if (s.percentage >= 33)
                printf("Result      : Pass\n");
            else
                printf("Result      : Fail\n");

            break;

        case 3:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}