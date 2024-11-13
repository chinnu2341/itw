#include <stdio.h>

// Function to multiply a series of numbers
int multiplyNumbers(int numbers[], int n) {
    int result = 1;  // Start with 1 as multiplying by 1 won't change the result
    
    for (int i = 0; i < n; i++) {
        result *= numbers[i];  // Multiply each number in the array
    }
    
    return result;
}

int main() {
    int n;

    // Input the number of elements to multiply
    printf("Enter the number of values to multiply: ");
    scanf("%d", &n);

    int numbers[n];  // Declare an array of size n

    // Input the values
    printf("Enter the numbers to multiply:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Call the multiplication function and display the result
    int result = multiplyNumbers(numbers, n);
    printf("The result of multiplying all the numbers is: %d\n", result);

    return 0;
}
