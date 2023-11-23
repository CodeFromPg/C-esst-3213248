#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zugang;

    printf("Bitte geben Sie ein einzelnes Zeichen als Zugangscode ein:\n");
    zugang = getchar();
    printf (((zugang == 'x') ? "Sie haben Zugang\n" : "Die Id war falsch\n"));

    return 0;
}