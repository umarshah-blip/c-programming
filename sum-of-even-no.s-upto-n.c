#include<stdio.h>
int main(){
    int a;
    int sum=0;
    printf("enter number:");
    scanf("%d",&a);
    for(int i=2;i<=a;i=i+2){
        sum=sum+i;}
        printf("%d",sum);
    
    
    
    return 0;
}