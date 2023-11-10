#include <stdio.h>
int main(){

 float x[3];
  printf("Please Enter The 3 numbars :");
 for(int i=0;i<3;i++){
    scanf("%f",&x[i]);
 }
 float max=0;
 float min=1000000000000;
  for(int i=0;i<3;i++){
    if(x[i]>max){
        max=x[i];
    }
    if(x[i]<min){
        min=x[i];
    }
  }
  printf("The max namber : %f",max);
  printf("\n");
  printf("The min namber : %f",min);
  return 0;
}
