#include <stdio.h>

struct Employee {

    float salary;
    float bonus;
    float deductions;
};

int main() {
    struct Employee employees[3];
    float totalValue = 0.0;
    char *name[] = {"ahmed","amr","waleed"};
    for (int i = 0; i < 3; i++) {
        printf(" for %s",name[i]);

        printf("\n please Enter  Salary: ");
        scanf("%f", &employees[i].salary);

        printf("please Enter  Bonus: ");
        scanf("%f", &employees[i].bonus);

        printf("please Enter  Deductions: ");
        scanf("%f", &employees[i].deductions);

        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        totalValue += employees[i].salary + employees[i].bonus - employees[i].deductions;
    }


    printf("Total value needed is : %.2f\n", totalValue);

    return 0;
}

