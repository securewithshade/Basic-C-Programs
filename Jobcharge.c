#include <stdio.h>
#include <conio.h>
void main()
{
    double hours, parts, jobcharge;
    printf("Hours Worked ?");
    scanf("%lf",&hours);
    printf("charge of parts ?");
    scanf("%lf",&parts);
    jobcharge = hours*parts;
    if (jobcharge<150) jobcharge=150;
    printf("\n Charge of the Job is :$%3.2f",jobcharge);
    getch();
}