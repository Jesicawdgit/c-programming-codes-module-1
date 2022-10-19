#include<stdio.h>
#include<math.h>

#define pi 3.1416

void main()
{
    int A;
    float r;
    printf("Enter the area of circle A:\n");
    scanf("%d", &A);

    r = sqrt(A/pi);
    printf("Radius if circle is:%f", r);
    
    return 0;

}
