#include<stdio.h>
 int main(){
  int num , factorial=1,i=1;
  printf("Enter the number  :");
    scanf("%d",&num);
   while(i<= num){
    factorial*=i;
    i++;
   }
   printf("%d ! = %d \n",num,factorial);
  return 0 ;
 }
