#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,p,q;
    printf("Enter the values of cofficents of equation in decending order: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a*c==0)
    printf("The solution of the equation is 1/%d\n",b);
    else{
        if(b =! 0){
            for(p=a*c , q=1 ; p*q<=a*c ; p-- , q++){
                if( (p*q) == (a*c))
                printf("The possible combination of products are %d , %d\n",p,q);
                else
                printf("No posssible combination of products\n");
                if( (p+q) == b)
                printf("The possible combination of sum are %d , %d\n",p,q);
                else
                printf("No possible combinations.\n");
            }       
        }            
        else
            printf("Try with another time");
    }        
    getch();
}