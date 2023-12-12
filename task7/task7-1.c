#include <stdio.h>
#include <limits.h>

int main() {
    int x[10];
    int i;
    int min = INT_MAX;
    int max = INT_MIN;

    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
        if (x[i] < min)
            min = x[i];
        if (x[i] > max)
            max = x[i];
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

