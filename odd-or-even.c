#include<stdio.h>

int main(){
   
   int a;
   printf("enter number :");
   scanf("%d",&a);
   
  if (a%2==0){
   printf("the number you entered is even");
  }
  else{
   printf("The number you entered is odd");
   }   
   return 0;
}