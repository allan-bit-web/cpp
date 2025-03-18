#include <stdio.h>

// Function to display factors of a number
void displayFactors(int num) {
    printf("Factors of %d are:\n ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n ", i);
        }
    }

    printf("\n");
}

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display factors of the number
    displayFactors(number);

    return 0;
}
