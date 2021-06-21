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