#include <stdio.h>

#define NUM_QUESTIONS 25
#define NUM_STUDENTS 3

void readAnswers(char answers[]) {

    printf("Enter the correct answers:\n");

    for (int i = 0; i < NUM_QUESTIONS; i++) {

        scanf(" %c", &answers[i]);
    }
}

void readResponses(char responses[][NUM_QUESTIONS]) {

    for (int i = 0; i < NUM_STUDENTS; i++) {


        printf("Enter the responses for student %d:\n", i + 1);

        for (int j = 0; j < NUM_QUESTIONS; j++) {

            scanf(" %c", &responses[i][j]);
        }
    }
}

int countCorrectAnswers(char answers[], char responses[]) {
    int count = 0;

    for (int i = 0; i < NUM_QUESTIONS; i++) {

        if (answers[i] == responses[i]) {
            count++;
        }
    }
    return count;
}

 int numWrongAnswers(char answers[], char responses[]) {
    int wrong = 0;
    for (int i = 1; i < NUM_QUESTIONS - 1; i++) {

        if (answers[i] != responses[i]) {
            wrong++;
             printf(" wrong question  : %d \n",i);
        }
    }
    return wrong ;
}



void printResults(int student, int correctCount) {
    printf("Student %d: \n %d correct answers\n", student, correctCount);
}




int main() {
    char correctAnswers[NUM_QUESTIONS];
    char studentResponses[NUM_STUDENTS][NUM_QUESTIONS];

    readAnswers(correctAnswers);
    readResponses(studentResponses);

    for (int i = 0; i < NUM_STUDENTS; i++) {
        int correctCount = countCorrectAnswers(correctAnswers, studentResponses[i]);
        printResults(i + 1, correctCount);


         int wrongCount = numWrongAnswers(correctAnswers, studentResponses[i]);
        wrongResults(i + 1, wrongCount);
    }




    return 0;
}

