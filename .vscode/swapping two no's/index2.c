#include<stdio.h>
void main(){

    int x,y;
    printf("Enter the value of x and y:\n ");
    scanf("%d:%d", &x, &y);

    printf("Before swapping, values of x and y are:%d:%d, x,y ");
    printf("\n");

    x = x+y;

    x = x-y;

    x = x-y;

    printf("After swapping, values of x and y are %d:%d", x,y);
    return 0;

}