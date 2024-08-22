/*
** UPI Payment Gateway System in C
** Developed by: Amad Bin Jaiyad
** Description: This program simulates a basic UPI payment gateway system,
** allowing users to choose various payment methods, enter details, and
** process transactions with PIN validation and balance checking.
*/

#include <stdio.h> // Include standard I/O library for input and output

int main() 
{
    // Variables to store user inputs and transaction details
    int choice;
    long long int mob, accNo;
    char upiId[20], ifscCode[11];
    char qrCode[50]; // Assuming the QR code is a string
    int upiPin = 1234; // Predefined UPI PIN for authentication
    int balance = 50000; // Initial balance for the user
    int enteredPin, transAmt;

    // Welcome message
    printf("\n*** WELCOME TO OUR UPI APP PAYMENT GATEWAY ***\n");

    do
    {
        // Display payment mode options to the user
        printf("\n--> Select the Payment Mode:\n");
        printf("1. Scan & Pay\n");
        printf("2. To Mobile/Contact\n");
        printf("3. UPI and UPI Lite\n");
        printf("4. To Bank Account\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Handle user's choice based on input
        switch (choice)
        {
            case 1:
                printf("Scan the QR Code (Enter QR Code ID or String): ");
                scanf("%s", qrCode);
                printf("QR Code Scanned successfully: %s\n", qrCode);
                break;

            case 2:
                printf("Enter Mobile Number/Contact: ");
                scanf("%lld", &mob);
                break;

            case 3:
                printf("Enter UPI Id (e.g., user@bank): ");
                scanf("%s", upiId);
                break;

            case 4:
                printf("Enter Bank Account Details.\n");
                printf("ACCOUNT NUMBER: ");
                scanf("%lld", &accNo);
                printf("IFSC CODE: ");
                scanf("%s", ifscCode);
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
                continue; // Go back to the beginning of the loop for another choice
        }

        // Transaction Processing section
        printf("Enter transaction amount: ");
        scanf("%d", &transAmt);
        printf("Enter your UPI PIN: ");
        scanf("%d", &enteredPin);

        // Validate the entered PIN and process the transaction
        if (enteredPin == upiPin)
        {
            // Check if there is sufficient balance
            if (transAmt <= balance)
            {
                balance -= transAmt; // Deduct transaction amount from balance
                printf("Transaction Successful. Remaining Balance: %d\n", balance);
            }
            else
            {
                printf("Transaction Failed (Insufficient Balance).\n");
            }
        }
        else
        {
            printf("Transaction Failed (Incorrect PIN). Please try again.\n");
        }

    } while (choice != 5); // Repeat the loop until the user chooses to exit

    return 0; // End of program
}