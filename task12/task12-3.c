
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int score;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int numStudents;


    int test ,i = 0 ;
    do{
             numStudents =i;
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the test score for student %d: ", i + 1);
        scanf("%d", &students[i].score);
        printf("More data ? -1 to stop or 0 to continue ");
        scanf("%d", &test);
       i++ ;

    }while (test == 0);



    int totalScore = 0;
    for (int i = 0; i < numStudents; i++) {
        totalScore += students[i].score;
    }
    double averageScore = (double) totalScore / numStudents;


 printf("\n ====================REPORT===========================\n");

     printf("\n student Name \t\t score \n");
      printf(" ------------ \t\t ----- \n");

    for (int i = 0; i < numStudents; i++) {
        printf("     %s  \t\t  %d \n",students[i].name ,students[i].score );
    }


  printf("the number of student is : %d",numStudents);
    // Output average score
    printf("\n the Average score for this class is : %.2f\n", averageScore);

    printf("\n ======================================================\n");

     printf("the students with scores below the average ! work harder !");

    printf("\n ======================================================\n");

    // Output names of students with scores below the average
     printf("\n student Name \t\t score \n");
 printf(" ------------ \t\t ----- \n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].score < averageScore) {
            printf("     %s  \t\t  %d \n", students[i].name , students[i].score);

        }
    }

    // Find highest score
    int highestScore = students[0].score;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].score > highestScore) {
            highestScore = students[i].score;
        }
    }

     printf("\n ======================================================\n");

     printf("top score student ! congratulation !");

    printf("\n ======================================================\n");


    // Output highest score and names of students with the highest score

    for (int i = 0; i < numStudents; i++) {
        if (students[i].score == highestScore) {
        printf("\n student Name \t\t score \n");

         printf(" ------------ \t\t ----- \n");
            printf("      %s  \t\t  %d\n",students[i].name ,highestScore);
        }
    }

    return 0;
}
