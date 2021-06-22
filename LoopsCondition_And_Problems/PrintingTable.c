//Wap to write any table in any range .
// In this program you will got to know data validation and defensive programming.
#include<stdio.h>
#include<conio.h>
void main()
{
    int factor , start , finish , m;
    printf("Type of table ? ");
    scanf("%d",&factor);
    printf("Starting number ? ");
    scanf("%d",&start);
    printf("Ending number ? ");
    scanf("%d",&finish);
    printf("\n");
    if(start>finish)
    printf("Invalid Data Staring number is bigger then ending value.");
    else
    {
        for (m=start; m<=finish; m++)
        printf("%2d * %d = %2d\n",m,factor,m*factor);
    }
getch();
}

/* We have validated input data using if condition so that our program does not fail for any integer value. 
   If we want to increase the range then increase varible memory and field width.

   Another way of validating the above program is by swapping the values of staring number and ending number in case starting number greater then ending number.
*/