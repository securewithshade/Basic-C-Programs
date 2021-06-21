// WAP to find the HCF of two numbers.

/*  while(condition)
    {
        <statement1>
        <statement2>
        <statementN>
    }

        prompt for and read two numbers
        while larger number non zero
        modulo divide largest by smallest 
        set remainder to divisor
        print divisor
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int m , n , r;
    printf("Enter the two numbers: ");
    scanf("%d%d",&m,&n);
    while(n!=0)
    {
    r=m%n;
    m=n;
    n=r;
    }
    printf("The HCF of entered numbers is %d",m);
getch();
}

/*How while loop works?
The while loop evaluates the test expression inside the parenthesis ().
If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again.
The process goes on until the test expression is evaluated to false.
If the test expression is false, the loop terminates (ends).*/