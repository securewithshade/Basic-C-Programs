#include <stdio.h>
#include <conio.h>
void main()
{
    int m , n , r;
    printf("Enter the two numbers: ");
    scanf("%d%d",&m,&n);
    while(n!=0){
    r=m%n;
    m=n;
    n=r;
    }
    printf("The HCF of entered numbers is %d",m);
getch();
}