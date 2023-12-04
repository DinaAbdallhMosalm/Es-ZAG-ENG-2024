
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversedNumber = reverseNumber(number);
    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}
int reverseNumber(int number) {
    int reversedNumber = 0;
    while (number > 0) {
        int remainder = number % 10;
        reversedNumber = (reversedNumber * 10) + remainder;
        number = number / 10;
    }
    return reversedNumber;
}
