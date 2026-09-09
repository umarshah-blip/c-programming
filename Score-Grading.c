#include<stdio.h>

int main(){
   
   int a;
   printf("enter score :");
   scanf("%d",&a);
    if (a>100){
   printf("Used an apsara pencil or what?");
 }
   else if(a<=100 && a>=90){
       printf("Your grade is A");
   }
   else if(a>79){
       printf("Your grade is B");
   }
   else if(a>69){
       printf("Your grade is C");
   }
   else if(a>59){
       printf("Your grade is D");
   }
   else{
       printf("FAIL");
   }
   return 0;
}