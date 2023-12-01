#include<stdio.h>
 int main(){
  int rows,value=1;
  printf("Enter the number of rows for floyd triangle :");
  scanf("%d",&rows);
  printf("floyd triangle :\n");
   for(int i=1;i<=rows;i++){
     for(int j=1;j<=i;j++){
       printf("%d\t  ", value);
       value++;
     }
     printf("\n");
   }

 return 0;
 }
