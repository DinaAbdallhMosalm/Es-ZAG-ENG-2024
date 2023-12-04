#include <stdio.h>
int main() {
    int num;
    char ch;
    printf("Enter a number and the character: ");
     scanf("%d",&num);
      scanf(" %c", &ch);

    if (num % 2 == 0) {
        printf("The character is: %c\n",ch);
    }
    else {

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
            printf("The character is: %c", ch);
        }
         else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        printf("The character is: %c", ch);
            }
    return 0 ;
}}
