#include <stdio.h>

int main() {
    int i;

    printf("Decimal\tOctal\tHexadecimal\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\t%o\t%X\n", i, i, i);
    }

    return 0;
}
