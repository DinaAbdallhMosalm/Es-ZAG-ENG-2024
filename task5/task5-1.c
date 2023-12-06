#include <stdio.h>

int main() {
    int num;
    int choice, pos;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position: ");
    scanf("%d", &pos);

    printf("Enter your choice:\n");
    printf("1. Set bit\n");
    printf("2. Clear bit\n");
    printf("3. Toggle bit\n");
    printf("4. Read bit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            num = setBit(num, pos);
            printf("Number after setting bit %d: %d\n", pos, num);
            break;
        case 2:
            num = clearBit(num, pos);
            printf("Number after clearing bit %d: %d\n", pos, num);
            break;
        case 3:
            num = toggleBit(num, pos);
            printf("Number after toggling bit %d: %d\n", pos, num);
            break;
        case 4:
            printf("Bit %d value in the number is: %d\n", pos, readBit(num, pos));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
int setBit(int num, int pos) {
    return num | (1 << pos);
}

int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

int readBit(int num, int pos) {
    return (num >> pos) & 1;
}
