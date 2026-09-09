#include<stdio.h>

int main(){
    int a;
    printf("enter number you want the table of:");
    scanf("%d",&a);
 for(int i=1; i<=10; i=i+1){
   printf("%d\n",a*i);
 }
   return 0;
}