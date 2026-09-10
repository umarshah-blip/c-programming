#include<stdio.h>
int main(){
    int a;
    int sum=0;
    printf("enter number:");
    scanf("%d",&a);
 for(int i=1;i<=a;i++){
    sum=sum+i;}
    printf("sum of all numbers are: %d",sum);
    
    
    return 0;
}