#include <stdio.h> 
#include <conio.h> 
void main()
{
    FILE*in = fopen("C:\\Users\\Vinay Sharma\\Desktop\\git\\changingInputandOutput\\input.txt","r");
    int num,sum=0,n=0;
    fscanf(in,"%d",&num);
    while(num!=0)
    {
        n=n+1;
        sum=sum+num;
        fscanf(in,"%d",&num);
    }
    if(n==0)printf("\nNo number supplied\n");
    else{
        if(n==1)
        printf("\n Only one number is supplied\n");
        else printf("\n%d Numbers supplied\n",n);    
    printf("The Sum is %d \n",sum);
    printf("The average is %3.2f \n",(double)sum/n);
    }
    fclose(in);
getch();
}