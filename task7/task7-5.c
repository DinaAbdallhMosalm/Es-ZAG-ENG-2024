#include <stdio.h>

int main() {
    char string[100];
    int digitCount[10] = {0};
    printf("Enter the string: ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= '0' && string[i] <= '9') {
            int digit = string[i] - '0';
            digitCount[digit]++;
        }
    }
    printf("Frequency of each digit:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, digitCount[i]);
    }

    return 0;
}
