#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter the length of rectangle:");
    scanf("%d",&a);
    printf("enter the breadth of rectangle:");
    scanf("%d",&b);
    printf("perimeter of rectangle is:%d",2*(a+b));
    return 0;
}