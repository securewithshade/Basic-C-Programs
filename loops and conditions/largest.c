// WAP to find the largest number from all the numbers entered.

/* This program is a basic example of using loop with conditions.

set biggest number to zero
prompt for and read the input number 
while input number is no zero 
if input number greater then biggest number
set biggest number to input number
prompt for and read input number 
endwhile
print biggestnumber

*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int bigNum=0,num;
    printf("Enter any number (press 0 to end)" );
    scanf("%d",&num);
    while(num != 0)
    {
        if(num>bigNum)
        bigNum=num;
        printf("Enter any number (press 0 to end)" );
        scanf("%d",&num);
    }
    printf("The largest number is %d ",bigNum);
getch();
}