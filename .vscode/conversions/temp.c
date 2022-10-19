#include<stdio.h>
void main()
{
    float c;
    float ch;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f", &c);

    ch = (1.8*c)+32;
    printf("Farenheit value is: %f", ch);

    return 0;

}