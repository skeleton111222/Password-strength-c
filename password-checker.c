#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    if (strlen(password) < 8) {
        printf("Password is WEAK (must be at least 8 characters)\n");
        return 0;
    }

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    if (upper && lower && digit && special)
        printf("Password is STRONG 💪\n");
    else
        printf("Password is WEAK ❌\n");

    return 0;
}
