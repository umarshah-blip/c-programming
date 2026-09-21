#include<stdio.h>
int main(){
   
  
 for (char ch = 'y'; ch == 'y';1){
   int choice;
   float r;
   float a;
   float b;
   float pi = 3.14;
   printf("chose a grometrical shape \n");
   printf("1.Circle\n");
   printf("2.Square\n" );
   printf("3.Rectangle\n");
   printf("4.Triangle\n");
   scanf("%d",&choice);
   if (choice == 1){
    printf("enter radius :");
    scanf("%f",&r);
    printf("area of this circle is : %f\n",pi*r*r);
   }
   else if (choice == 2){
    printf("enter side of the square :");
    scanf("%f",&a);
    printf("area of this square is: %f\n",a*a );
   }
   else if(choice == 3){
    printf("enter length :");
    scanf("%f",&a);
    printf("enter breadth:");
    scanf("%f",&b);
    printf("area of this rectangle is: %f\n",a *b);
   }
    else if(choice == 4){
        printf("enter height:");
        scanf("%f",&a);
        printf("enter base:");
        scanf("%f",&b);
   printf("area of this triangle is: %f\n ",0.5 * a * b); }
    else{
        printf("wrong choice filling\n");
    }
  printf("do you wish to continue?y/n:");
  scanf(" %c",&ch);
 }
    return 0;
}