#include <stdio.h>

int main() {
    int marks;
    
    // Input marks from the user
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);
    
    // Check the division based on marks
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
