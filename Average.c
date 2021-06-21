#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    double average;
    printf("Enter the three numbers to calculate their average ");
    scanf("%d%d%d",&a,&b,&c);
    average=(a+b+c)/3.0;
    printf("The average is %3.1f",average);
    getch();
}