/*Wap for calculating interest and service charge for banking purpose.
  
  char kind of datatype used to store cheracters.
  gets is similar to scanf used to read cheracters.

    Algorithm
    prompt for and read customer name, account number, average balance, number of transistions.
    calculate interest = averageBalance*0.06
    calculate service charge = number of transistion*0.50
    print name, interest, service charge 
*/

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
// In char[30] 30 signifies the cheracter length. It can store upto 29 cheracters(0-29). 
// /n is used to insert a line .