// WAP to calculate JobCharge using if statement.
// %lf is the format specifier for double datatype.(8 byte)

/* if(condition)
    {   
        <statement1>
        <statement2>
        ..
        <statementN>
    }

    prompt for and read working hours, parts
    calcualte jobcharge = hour*parts
    if jobcharge < 150 
    set jobchage to 150
    print jobcharge
*/

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

/*How if statement works?
The if statement evaluates the test expression inside the parenthesis ().

If the test expression is evaluated to true, statements inside the body of if are executed.
If the test expression is evaluated to false, statements inside the body of if are not executed.*/