#include <stdio.h>

void calculateSumAndDifference(int a, int b, int *sum, int *sub) {
    *sum = a + b;
    *sub = a - b;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum, sub;
    calculateSumAndDifference(num1, num2, &sum, &sub);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", sub);

    return 0;
}

