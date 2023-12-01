#include<stdio.h>
 int main(){
  int n, num,max,min ;
  printf("enter the total number of values ");
  scanf("%d",&n);
   printf("Enter the first number  :");
    scanf("%d",&num);
    max = num;
    min = num;
    for(int i=2 ;i<=n;i++){
      printf("Enter the next number : \n",i);
       scanf("%d",&num);
         if(max < num){
             max = num;
             }
            if(min > num){
             min = num;
             }
     }
      printf("the max number : %d \n",max);
      printf("the min number : %d \n",min);
     return 0 ;
 }
