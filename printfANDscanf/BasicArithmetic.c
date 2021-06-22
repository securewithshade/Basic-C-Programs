// Wap to show basic arithmetic operations on two numbers.
// The basic arithmetic operations are addition,subtraction,multiplication and division.

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b;
    printf("Enter any two numbers");
    scanf("%f%f",&a,&b);
    printf("\nThe sum of given numbers is %.2f\n",a+b);
    printf("The difference of given numbers is %.2f\n",a-b);
    printf("The product of given number is %.2f\n",a*b);
    printf("The division of given number is %.2f\n",a/b);
getch();
}