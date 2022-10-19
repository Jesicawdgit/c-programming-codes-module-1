#include<stdio.h>
int main(){

    double first,  second, temp;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    //value of first is assingned to temp
    temp = first;

    //value of second is assigned to forst
    first = second;

    //value of temp (intial value of first) is assgned to
    second = temp;

    //%d displays integer number
    printf("\nAfter swapping, first number = %d\n", first);
    printf("After swapping, second number = %d", second);
    return 0;

}