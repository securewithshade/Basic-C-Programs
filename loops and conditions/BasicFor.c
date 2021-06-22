//Wap a basic program of for loop.
/* syntex
        for(initialize counter;test counter;increment counter)
        {
            <statement1>
            <statement2>
            .
            <statementN>
        }

We can also any one or two counters in the for loop construct but don't forget to add semicolons.
All the counters in the for loop construct can be any valid expressions.

    The psudo code
    for h=1 to 5 do
    print "This statement will be printed five times"
    endfor
*/ 
#include <stdio.h>
#include <conio.h>
void main()
{
    for(int h=1;h<=5;h++)
    printf("This statement will be printed five times\n");
getch();
}
/*The above program can be written as :
    #include <stdio.h>
    #include <conio.h>
    void main()
    {
        int h;
        h=1;
        while(h<=5)
        {
            printf("This statement will be printed five times\n");
            h=h+1;
        }
    getch();
    }

        How for loop works?
        
        1. Intialises the value of the variable.
        2. Test the condition.
        3. Result True will execute the body of for loop. Value incremented,if present,.
        4. Result False will skip the loop.



*/