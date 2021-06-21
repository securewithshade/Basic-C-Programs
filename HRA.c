#include <stdio.h>
#include <conio.h>
void main()
{
    int a,hra;
    printf("Enter the basic pay :");
    scanf("%d",&a);
    if(a<=4000)
    {
        if(a<=2000)
            hra = 200;
        else
            hra = 350;
    }
    else 
        hra = 500;
        printf("The HRA is :%d",hra);
getch();

}