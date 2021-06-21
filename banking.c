#include <stdio.h>
#include <conio.h>
void main()
{
    char customer[30],accNum[30];
    float avgBalance,interest,service;
    int numTrans;
    printf("Name ?  ");
    gets(customer);
    printf("Account number ?  ");
    gets(accNum);
    printf("Average Balance ?  ");
    scanf("%f",&avgBalance);
    printf("Numbeer of transistions ?  ");
    scanf("%d",&numTrans);
    interest=avgBalance*0.06;
    service=numTrans*0.50;
    printf("\nName : %s\n",customer);
    printf("Intrest : INR %3.2f\n",interest);
    printf("Service charge : INR %3.2f",service);
    getch();
}
