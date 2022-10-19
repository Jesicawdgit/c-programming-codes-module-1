#include<stdio.h>
int main()
{
    float inch;
    float cm;
    printf("Enter the value in inches:\n");
    scanf("%f", &inch);

    cm = 2.54*inch;
    printf("Equivalent value is:%f", cm);
    
    return 0;

}