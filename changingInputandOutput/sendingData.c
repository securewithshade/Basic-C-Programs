#include <stdio.h> 
#include <conio.h> 
void main()
{
    FILE * in = fopen("C:\\Users\\Vinay Sharma\\Desktop\\git\\changingInputandOutput\\input.txt", "r");
    FILE * out = fopen("C:\\Users\\Vinay Sharma\\Desktop\\git\\changingInputandOutput\\output.txt", "w");
    int num, sum = 0, n = 0;
    fscanf(in, "%d", &num);
    while (num != 0) {
        n = n + 1;
        sum = sum + num;
        fscanf(in, "%d", &num);
    }
    if (n == 0) fprintf(out, "No numbers entered\n");
    else {
        fprintf(out, "%d numbers were entered\n", n);
        fprintf(out, "The sum is %d\n", sum);
        fprintf(out, "The average is %3.2f\n", (double) sum/n);
    }
fclose(in);
fclose(out);
getch();
}