#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i < strlen(sentence); i++) {

        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            printf("\n");
        } else {
            printf("%c", sentence[i]);
        }
    }

    return 0;
}
