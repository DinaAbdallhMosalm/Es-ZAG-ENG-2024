#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));

    int classnum1[10];
    int classnum2[10];
    int classnum3[10];

    for (int i = 0; i < 10; i++) {
        classnum1[i] = rand() % (100 + 1);
        classnum2[i] = rand() % (100 + 1);
        classnum3[i] = rand() % (100 + 1);
    }
    int passedCount = 0;
    int failedCount = 0;
    int highestGrade = 0;
    int lowestGrade = 100;
    int totalGrades = 0;

    printf("Class 1 Grades:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, classnum1[i]);
    }
    printf("\n");

    printf("Class 2 Grades:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, classnum2[i]);
    }
    printf("\n");

    printf("Class 3 Grades:\n");
    for (int i = 0; i <10; i++) {
        printf("Student %d: %d\n", i + 1, classnum3[i]);
    }
    printf("\n");

    void calculateStatistics(int classGrades[]) {
        for (int i = 0; i < 10; i++) {
            totalGrades += classGrades[i];

            if (classGrades[i] >= 50) {
                passedCount++;
            } else {
                failedCount++;
            }

            if (classGrades[i] > highestGrade) {
                highestGrade = classGrades[i];
            }

            if (classGrades[i] < lowestGrade) {
                lowestGrade = classGrades[i];
            }
        }
    }

    calculateStatistics(classnum1);
    calculateStatistics(classnum2);
    calculateStatistics(classnum3);

    double averageGrade = (double)totalGrades / (3 * 10);


    printf("Number of passed students: %d\n", passedCount);
    printf("Number of failed students: %d\n", failedCount);
    printf("Highest grade: %d\n", highestGrade);
    printf("Lowest grade: %d\n", lowestGrade);
    printf("Average grade: %.2f\n", averageGrade);

    return 0;
}
