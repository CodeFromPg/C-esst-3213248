#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Challenge 5.1: Gib ein Zeichen ein und ermittle den Zeichencode in DEZ
    char zeichen;

    printf("Bitte geben Sie ein Zeichen ein:\n");
    zeichen = getchar();
    printf("Sie haben das Zeichen %c eingegeben.\n", zeichen);
    int zeichenZahl = (int)zeichen;
    printf("Der Zeichencode ist %d\n",zeichenZahl);

    return 0;
}