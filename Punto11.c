#include <stdio.h>

int main() {
    int num1 = 10;
    float num2 = num1;
    printf("Implicit Type Casting: int to float\n");
    printf("num1 (int): %d\n", num1);
    printf("num2 (float): %f\n\n", num2);

    float num3 = 20.5;
    int num4 = (int)num3;
    printf("Explicit Type Casting: float to int\n");
    printf("num3 (float): %f\n", num3);
    printf("num4 (int): %d\n", num4);

    return 0;
}
