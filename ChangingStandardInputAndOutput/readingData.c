//Wap to read data from a file i.e getting input from another file.
/*
    For redirecting the standard file we have to follow the following steps:
    
    1. Declare an identifer called a "file pointer".
    2. Associate the file pointer with your file.
*/
#include <stdio.h> 
#include <conio.h> 
void main()
{
    FILE*in = fopen("C:\\Users\\Vinay Sharma\\Desktop\\git\\changingInputandOutput\\input.txt","r"); // decleration of file pointer and file association.
    int num,sum=0,n=0;
    fscanf(in,"%d",&num); //fscanf used to read data from the file. fscanf(file pointer,format specifier,variable)
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
    fclose(in); //breaking link from the file pointer.
getch();
}

// for reading data from a file all what we have to do is to redicect standard input.