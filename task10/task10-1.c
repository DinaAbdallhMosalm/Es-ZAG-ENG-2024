#include <stdio.h>

int main() {
    int num = 10;
    printf("the value of the number is : %d\n", num);

    int *ptr;
    ptr = &num;

    *ptr = 20;

    printf("the value after change is : %d\n", num);

    return 0;
}
