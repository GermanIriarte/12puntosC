#include <stdio.h>
#include <ctype.h>


int isUpperCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (isUpperCase(ch)) {
        printf("%c is not lowercase letter.\n", ch);
    } else {
        printf("%c is a lowercase letter.\n", ch);
    }
    
    return 0;
}
