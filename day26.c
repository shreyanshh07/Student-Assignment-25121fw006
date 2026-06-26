#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// program to implement a number guessing game 
int main()
{
    int secretNumber, guess;

    srand(time(0));

    secretNumber = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I have selected a number between 1 and 100.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > secretNumber)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number.\n");
        }

    } while (guess != secretNumber);

    return 0;
}




#include <stdio.h>
// program to create a vote calculator 
int main() {
    int age;
    int items_read;

    printf("--- Welcome to the Voting Eligibility System ---\n");
    printf("Please enter your age: ");

    items_read = scanf("%d", &age);

    // Check if the user entered a non-numeric value
    if (items_read != 1) {
        printf(" Error: Please enter a valid whole number for your age.\n");
        return 1; // Exit the program with an error code
    }


    if (age < 0 || age > 120) {
        printf(" Invalid age. Please enter a realistic number.\n");
    } 
 
    else if (age >= 18) {
        printf("You are eligible to vote! Make your voice count.\n");
    } 
    else {
        int years_left = 18 - age;
        printf(" You are not eligible to vote yet. You can vote in %d year(s).\n", years_left);
    }

    return 0;
}




#include <stdio.h>
// program to implement a simple ATM system
int main() {
    // Initializing simulation data
    int default_pin = 1234;
    int entered_pin;
    double balance = 5000.00; // Starting balance
    int choice;
    double amount;
    int is_running = 1;

    printf("--- Welcome to the TechBank ATM ---\n");
    
    // Step 1: PIN Authentication
    printf("Please enter your 4-digit PIN: ");
    if (scanf("%d", &entered_pin) != 1) {
        printf("❌ Invalid input. Transaction cancelled.\n");
        return 1;
    }

    if (entered_pin != default_pin) {
        printf("❌ Incorrect PIN. Access Denied.\n");
        return 1;
    }

    // Step 2: Main ATM Loop
    while (is_running) {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");
        printf("Enter your choice (1-4): ");
        
        if (scanf("%d", &choice) != 1) {
            printf(" Invalid choice. Exiting system.\n");
            break;
        }

        switch (choice) {
            case 1:
                // Check Balance
                printf("\n Current Balance: $%.2f\n", balance);
                break;

            case 2:
                // Deposit Money
                printf("\nEnter amount to deposit: $");
                if (scanf("%lf", &amount) != 1 || amount <= 0) {
                    printf(" Invalid amount.\n");
                    // Clear input buffer
                    while (getchar() != '\n'); 
                } else {
                    balance += amount;
                    printf(" $%.2f deposited successfully.\n", amount);
                    printf("New Balance: $%.2f\n", balance);
                }
                break;

            case 3:
                // Withdraw Money
                printf("\nEnter amount to withdraw: $");
                if (scanf("%lf", &amount) != 1 || amount <= 0) {
                    printf(" Invalid amount.\n");
                    while (getchar() != '\n');
                } else if (amount > balance) {
                    printf(" Insufficient funds! Your balance is $%.2f\n", balance);
                } else {
                    balance -= amount;
                    printf(" $%.2f withdrawn successfully.\n", amount);
                    printf("Remaining Balance: $%.2f\n", balance);
                }
                break;

            case 4:
                // Exit
                printf("\nThank you for using TechBank. Goodbye!\n");
                is_running = 0;
                break;

            default:
                printf(" Invalid choice. Please select an option between 1 and 4.\n");
        }
    }

    return 0;
}





#include <stdio.h>

// Define a structure to hold question data
typedef struct {
    char question[200];
    char options[4][100];
    int correct_option; // 1 for A, 2 for B, 3 for C, 4 for D
} QuizQuestion;

int main() {
    // Initialize an array of questions
    QuizQuestion quiz[3] = {
        {
            "Which programming language is known as the 'mother of all languages'?",
            {"A. Python", "B. C", "C. Java", "D. C++"},
            2
        },
        {
            "What is the size of an 'int' data type in C (typically on a 64-bit system)?",
            {"A. 2 Bytes", "B. 4 Bytes", "C. 8 Bytes", "D. 1 Byte"},
            2
        },
        {
            "Which of the following is NOT a valid loop in C?",
            {"A. for", "B. while", "C. do-while", "D. foreach"},
            4
        }
    };

    int total_questions = 3;
    int score = 0;
    int user_answer;

    printf("--- Welcome to the C Programming Quiz ---\n");
    printf("Answer by typing 1, 2, 3, or 4.\n\n");

    // Loop through each question
    for (int i = 0; i < total_questions; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question);
        
        // Print the 4 options
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        // Get user input with basic validation
        printf("Your answer (1-4): ");
        while (scanf("%d", &user_answer) != 1 || user_answer < 1 || user_answer > 4) {
            printf(" Invalid choice. Please enter a number between 1 and 4: ");
            while (getchar() != '\n'); // Clear buffer
        }

        // Check if the answer is correct
        if (user_answer == quiz[i].correct_option) {
            printf(" Correct!\n\n");
            score++;
        } else {
            printf(" Wrong! The correct answer was option %d.\n\n", quiz[i].correct_option);
        }
    }

    // Final Results
    printf("=================================\n");
    printf("Quiz Over!\n");
    printf("Your Final Score: %d out of %d\n", score, total_questions);
    
    // Performance rating
    if (score == total_questions) {
        printf("Result: Perfect score! Excellent job! 🎉\n");
    } else if (score >= total_questions / 2) {
        printf("Result: Good effort! 👍\n");
    } else {
        printf("Result: Better luck next time! 📚\n");
    }
    printf("=================================\n");

    return 0;
}