#include <stdio.h>

// Function to find the maximum of three numbers
int findMax(int num1, int num2, int num3) {
    int max = num1; // Assume num1 is the maximum
    
    // Compare num2 with max
    if (num2 > max) {
        max = num2;
    }
    
    // Compare num3 with max
    if (num3 > max) {
        max = num3;
    }
    
    return max;
}

int main() {
    int num1, num2, num3;
    
    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Find the maximum number among the three
    int max = findMax(num1, num2, num3);
    
    // Print the maximum number
    printf("The maximum number is: %d\n", max);
    
    return 0;
}
