#include<stdio.h>
int main(){
 int a;
 printf("enter number:");
 scanf("%d",&a);
 for(int i=2;i<=a;i=i+2){
     printf("%d\n",i);
 }
    return 0;
}