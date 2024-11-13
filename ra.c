#include <stdio.h>

// Function to calculate factorial using iteration
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;

    // Asking user to input a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Checking if the number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Displaying the factorial result
        printf("Factorial of %d is %lld\n", number, factorial(number));
    }

    return 0;
}
