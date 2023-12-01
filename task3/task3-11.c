#include<stdio.h>
 int main(){
    int x[5];
    int i;
 printf("please enter the 5 input number :");
 for( i=0;i<5;i++){
    scanf("%d",&x[i]);
   }
 for( i=0;i<5;i++){
    if(x[i]%3== 0){
        printf("\n the number divisible by 3 is :%d \n   ",x[i]);
    }}
    if((x[0]&&x[1]&&x[2]&&x[3]&&x[4])%3 != 0){
    printf("there is no number divisible by 3 \n  ");
    }


return 0;
}
