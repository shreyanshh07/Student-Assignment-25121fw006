#include <stdio.h>
#include <string.h>
// program to create library management system
struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", b[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);

                b[n].issued = 0;
                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nBook List:\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook ID : %d", b[i].id);
                        printf("\nTitle   : %s", b[i].title);
                        printf("\nAuthor  : %s", b[i].author);

                        if(b[i].issued)
                            printf("\nStatus  : Issued\n");
                        else
                            printf("\nStatus  : Available\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        printf("\nBook Found");
                        printf("\nTitle  : %s", b[i].title);
                        printf("\nAuthor : %s", b[i].author);

                        if(b[i].issued)
                            printf("\nStatus : Issued\n");
                        else
                            printf("\nStatus : Available\n");

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].issued)
                            printf("Book Already Issued!\n");
                        else
                        {
                            b[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");
                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        if(b[i].issued)
                        {
                            b[i].issued = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                            printf("Book Was Not Issued!\n");

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}




#include <stdio.h>
// program to craete bank management system 
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    int choice;
    float amount;

    printf("Create Bank Account\n");
    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    do
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Display Account Details\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAccount Number : %d", b.accNo);
                printf("\nAccount Holder : %s", b.name);
                printf("\nBalance : %.2f\n", b.balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                b.balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 3:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= b.balance)
                {
                    b.balance -= amount;
                    printf("Amount Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Current Balance: %.2f\n", b.balance);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}





#include <stdio.h>
// program to create ticket booking system
struct Ticket
{
    char name[50];
    int age;
    int seats;
    float fare;
};

int main()
{
    struct Ticket t;
    int choice;
    float price = 500;   // Fare per ticket

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t.name);

                printf("Enter Age: ");
                scanf("%d", &t.age);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                t.fare = t.seats * price;

                printf("\nTicket Booked Successfully!\n");
                printf("Total Fare = %.2f\n", t.fare);
                break;

            case 2:
                if(t.seats > 0)
                {
                    printf("\n----- Ticket Details -----\n");
                    printf("Passenger Name : %s\n", t.name);
                    printf("Age            : %d\n", t.age);
                    printf("Seats Booked   : %d\n", t.seats);
                    printf("Total Fare     : %.2f\n", t.fare);
                }
                else
                {
                    printf("No Ticket Booked!\n");
                }
                break;

            case 3:
                if(t.seats > 0)
                {
                    t.seats = 0;
                    t.fare = 0;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("No Ticket to Cancel!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}





#include <stdio.h>
#include <string.h>
// progarm to create contact management system
struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[100];
    int n = 0, choice, i;
    char search[50];

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                printf("Enter Email: ");
                scanf("%s", c[n].email);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Contacts Available!\n");
                }
                else
                {
                    printf("\n----- Contact List -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        printf("Email : %s\n", c[i].email);
                    }
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", search);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(c[i].name, search) == 0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        printf("Email : %s\n", c[i].email);
                        break;
                    }
                }

                if(i == n)
                    printf("Contact Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}