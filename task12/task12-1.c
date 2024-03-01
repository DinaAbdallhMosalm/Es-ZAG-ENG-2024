#include <stdio.h>

enum Month {
    jan = 1,
    feb,
    mars,
    apl,
    may,
    jun,
    july,
    aut,
    sep,
    oct,
    nov,
    dec
};

int main() {
    printf("Month values:\n");
    printf("JANUARY = %d\n", jan);
    printf("FEBRUARY = %d\n", feb);
    printf("MARCH = %d\n", mars);
    printf("APRIL = %d\n", apl);
    printf("MAY = %d\n", may);
    printf("JUNE = %d\n", jun);
    printf("JULY = %d\n", july);
    printf("AUGUST = %d\n", aut);
    printf("SEPTEMBER = %d\n", sep);
    printf("OCTOBER = %d\n", oct);
    printf("NOVEMBER = %d\n", nov);
    printf("DECEMBER = %d\n", dec);

    return 0;
}
