#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int i;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    int length = strlen(password);

    if (length < 8) {
        printf("Password is weak. It must be at least 8 characters long.\n");
        return 0;
    }

    for (i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        printf("Password is STRONG.\n");
    else
        printf("Password is WEAK. Include uppercase, lowercase, digit, and special character.\n");

    return 0;
}







