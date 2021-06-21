//WAP to check pass and fail using if-else statement.

/* 
if(condition)
   {
      <statements>
   }
else
   <statement>

promt for and read marks obtained 
if marks > 35
print pass
else print fail

*/

#include <stdio.h>
#include <conio.h>
void main() 
{
   int a;
   printf("Enter the marks obtained ");
   scanf("%d",&a);
   if (a > 35)
   printf("\n You are pass");
   else
   printf("\n You are fail");
   getch();
}

/*How if...else statement works?

If the test expression is evaluated to true,

statements inside the body of if are executed.
statements inside the body of else are skipped from execution.

If the test expression is evaluated to false,

statements inside the body of else are executed
statements inside the body of if are skipped from execution.
*/