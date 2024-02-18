#include <stdio.h>

double AverageArray(int arr[], int size) {

    if (size == 0) {
        return 0;
    }
    else{

    double sum = arr[size - 1] + AverageArray(arr, size - 1);

    return sum / size;
    }
}

int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    double average = AverageArray(arr, N);

    printf("Average: %2.6f\n", average);

    return 0;
}

