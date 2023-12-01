#include<stdio.h>
#include<math.h>
 int main(){
 int num,n,result;
  printf("Enter the number and power of the number :\n");
  scanf("%d%d",&num,&n);
  result = pow(num,n);
  printf("%d",result);
 return 0;
 }
