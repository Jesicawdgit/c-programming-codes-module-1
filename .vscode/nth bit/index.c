#include <stdio.h>

int main()
{
    int num, n, bitwise;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    bitwise = (num >> n) & 1;

    printf("The %d bit is set to %d", n, bitwise);

    return 0;
}