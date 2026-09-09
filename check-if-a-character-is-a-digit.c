#include<stdio.h>

int main(){
   
int a;

printf("enter no.");

scanf("%c",&a);

if(a>='0' && a<='9'){
   printf("It is a digit :%c",a);
}
else{
   printf("not a digit");
}
   return 0;
}