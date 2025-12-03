#include <stdio.h>

int main() {
    int choice;
    double amount, converted;

    printf("=== Currency Converter ===\n");

    while(1) {
        printf("\nMenu:\n");
        printf("1. USD to INR\n");
        printf("2. INR to USD\n");
        printf("3. USD to EUR\n");
        printf("4. EUR to USD\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter amount: ");
        scanf("%lf", &amount);

        switch(choice) {
            case 1: converted = amount * 83.5; printf("Result: %.2lf INR\n", converted); break;
            case 2: converted = amount / 83.5; printf("Result: %.2lf USD\n", converted); break;
            case 3: converted = amount * 0.91; printf("Result: %.2lf EUR\n", converted); break;
            case 4: converted = amount / 0.91; printf("Result: %.2lf USD\n", converted); break;
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
