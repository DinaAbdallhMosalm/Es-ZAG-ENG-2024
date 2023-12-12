#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d space-separated integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int start = 0;
    int last = n - 1;
    while (start < last) {
        int temp = array[start];
        array[start] = array[last];
        array[last] = temp;
        start++;
        last--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
