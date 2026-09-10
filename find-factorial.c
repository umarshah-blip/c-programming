#include<stdio.h>
int main(){
   int a;
   int fac = 1;
   printf("enter no.");
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
       fac=fac*i;
   }
  printf("%d",fac);
    return 0;
}