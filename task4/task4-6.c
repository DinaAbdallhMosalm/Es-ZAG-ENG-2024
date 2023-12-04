#include <stdio.h>

int main() {
    int A, B, C, D;
    printf("Enter four numbers A B C D: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int result = (A * B * C * D) % 100;

    printf("Last 2 digits from the multiplication: %d\n", result);

    return 0;
}
