// WAP to calculate average of three numbers. 

/* prompt for and read the three numbers
   calculate average = sum of the numbers / 3.0
   print average

Field width as the name suggests is the width or space which needs to be given for that particular display line and 
it is specified using numbers. %3.1f signifies field width is 3 and upto 1 decimal.
    
    scanf("formatSpecifier,&variableName"); */

#include <stdio.h> 
#include <conio.h> 
void main() 
{
    int a,b,c; //Variable decleration.
    double average; 
    printf("Enter the three numbers to calculate their average "); 
    scanf("%d%d%d",&a,&b,&c); //reading  data given by user.
    average=(a+b+c)/3.0; //calculating average and assigning to variable average.
    printf("The average is %3.1f",average); //print value of average.
    getch(); 
}
//scanf function is used to read the data from the screen .
//%d are the frmat specifiers that reserves the memomory for the variables. eg. %d for integer (2 byte), %f for float (4 byte).