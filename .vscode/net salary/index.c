#include<stdio.h>
int main()
{
    int salary;
    double days, basic, HRA, DA, PF, netsalary;
    printf("Enter daily wages and number of days worked");
    scanf("%d, %f", &salary, &days);
    
    basic = salary*days;
    HRA = basic*3;
    DA = basic*5;
    PF = basic*12;

    netsalary = basic+HRA+DA+PF;

    printf("\n Basic:%d\n HRA: %d \n DA: %d\n PF: %d \n netsalary: %d", basic, HRA, DA, PF, netsalary);

    return 0;


    
    }