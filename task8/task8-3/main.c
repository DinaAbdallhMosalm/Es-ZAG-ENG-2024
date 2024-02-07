
#include <stdio.h>

#include "header.h"
#define FUNCTION_H
#define Set_Bit(Var, BitNo)   ((Var) |= (1 << (BitNo)))
#define Clr_Bit(Var, BitNo)   ((Var) &= ~(1 << (BitNo)))
#define Toggle_Bit(Var, BitNo)   ((Var) ^= (1 << (BitNo)))
int main() {
    unsigned int var = 0;
    Set_Bit(var, 3);
    printf("Value after setting the bit: %u\n", var);

    Clr_Bit(var, 2);
    printf("Value after clearing the bit: %u\n", var);

    Toggle_Bit(var, 4);
    printf("Value after toggling the bit: %u\n", var);

    return 0;
}

