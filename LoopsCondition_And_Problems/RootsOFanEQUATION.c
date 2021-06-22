//Wap to find the real roots of a quadratic equation.
//maths.h allows us to use many mathematical fuctions like squareroot,minus etc easily

/*
    pronpt for and read the cofficients of equation
    calculate discriminant = b*b - 4ac
    if discriminant equals zero. print roots are equal equal to -b/2a
    if discriminant greater then zero . print roots are real and different equal to (-b +- squareroot discriminat)/2a
    if discriminant less then zero print The roots are imaginary.
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a,b,c,D,root1,root2;
    printf("Enter the cofficients of Quadratic Equation in general form (ax^2+bx+c) ");
    scanf("%f%f%f",&a,&b,&c);
    D= b*b - 4*a*c; //calculating discriminant.
    if (D==0)
    {
        printf("The roots of quadratic equation are equal.\n");
        root1=root2= -b/(2*a);
        printf("%.3f,%.3f",root1,root2);
    }
    if (D>0)
    {
        printf("The roots of the quadratic equation are real and different.\n");
        root1= (-b + sqrt(D))/(2*a); //Quadratic Formula.
        root2= (-b - sqrt(D))/(2*a); //Quadratic Formula.
        printf("%.3f,%.3f",root1,root2);
    }
    if (D<0)
    {
        printf("The roots are imaginary.\n");

    }
getch();
}
/*We can also calculate the imaginary roots as:
    declare two more double variables realPart and imgPart
    and replace the last if with the code below.

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
*/