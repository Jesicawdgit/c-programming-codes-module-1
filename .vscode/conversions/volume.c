#include<stdio.h>
#define pi 3.1416
void main()
{
    int r;
    float vol;
    printf("Enter the radius of the sphere:\n");
    scanf("%d", &r);

    vol = (4/3)*pi*r*r*r;

    printf("Volume of sphere is:%f", vol);
    
    return 0;

}