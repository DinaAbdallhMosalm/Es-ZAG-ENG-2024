#include <stdio.h>

int main() {
    int x, y, z;
    int *p, *q, *r;

    x = 10;
    y = 20;
    z = 30;
    p = &x;
    q = &y;
    r = &z;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("p: %p\n", (void *)p);
    printf("q: %p\n", (void *)q);
    printf("r: %p\n", (void *)r);
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);
    printf("*r: %d\n\n", *r);

    printf("Swapping pointers.\n\n");

    int *temp = r;
    r = p;
    p = q;
    q = temp;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("p: %p\n", (void *)p);
    printf("q: %p\n", (void *)q);
    printf("r: %p\n", (void *)r);
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);
    printf("*r: %d\n", *r);

    return 0;
}
