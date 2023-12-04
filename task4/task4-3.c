#include <stdio.h>

int main() {
    int num ,r;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=15 ;i>=0;i--){
    r = num;
    r = r >>i;
    r=r&0x0001;
    printf("%d",r);
    }

    return 0;
}
