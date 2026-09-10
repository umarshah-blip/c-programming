#include<stdio.h>

int main(){
    char choice = 'y';
    while(choice=='y'){
    float a;
    char op;
    float b;
    printf("enter first number:");
    scanf("%f",&a);
    
    printf("enter operand ('+' , '-' , '*' , '/'): ");
    scanf(" %c",&op);
    
    printf("enter second number:");
    scanf("%f",&b);
    if(op=='+'){
        printf("%f\n",a+b);
    }
    else if (op=='-'){
        printf("%f\n",a-b);
    }
    else if(op=='*'){
        printf("%f\n",a*b);
    }
    else if(op=='/') { 
    
   if(b!=0) printf("%f\n",a/b);
    
    else printf("cannot divide by zero\n");
    }
    else{ printf("not a valid operand\n");
    }
      printf("do you wish to continue? y/n\n");
      
      scanf(" %c",&choice);

    }
 
   return 0;
}