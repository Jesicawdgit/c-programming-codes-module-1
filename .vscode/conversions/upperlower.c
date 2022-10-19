#include<stdio.h>
#include<conio.h>

int main()
{
    char uppr, lwr;
    int ascii;

    printf("Enter the Upper Case Character: ");
    scanf("%c", &uppr);
    ascii = uppr + 32;
    printf("character in Lower Case is: %c", uppr, ascii);

    printf("\n Enter the Lower Cse Character: ");
    scanf("%c", &lwr);
    ascii = lwr - 32;
    printf("character in Upper Case is: %c", lwr, ascii);


    return 0;

}
