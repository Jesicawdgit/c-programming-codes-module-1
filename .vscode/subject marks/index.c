#include<stdio.h>
int main()

{
    int sub1, sub2, sub3, sub4, sub5;
    float Total, Average, Percentage;

    printf("Enter the marks of five subjects:\n");
    scanf("%d:%d:%d:%d:%d, &sub1, &sub2, &sub3, &sub4, &sub5");
    
    Total = sub1+ sub2+ sub3+ sub4+ sub5;
    Average = Total/5;
    Percentage = (Total/500)*100;

    printf("Toatl marks=%2f\n", Total);
    printf("Average marks=%2f\n", Average);
    printf("Percentage marks=%2f\n", Percentage);

    return 0;


    
    }