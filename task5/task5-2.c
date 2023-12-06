#include <stdio.h>

int main() {
    int num;
   int Check( int );
    printf("please Enter a postive number: \n");
     scanf("%d", &num);
    if (num >= 1){
        int z=Check(num);
        if (z ==0){
                printf("the number is not prime .");
    }else{printf("the number is  prime .");}
    }
    else{printf("the number is not postive \n");
    }
 return 0 ;
}

     int Check(int num){
     for (int i =2 ;i<num;i++){
        if(num % i == 0){
           return 0;
        }
        else{
             return 1;
        }}
     }
