#include <stdio.h>
#include <stdlib.h>
#include "headerChar.h"
#include "headerStringVergleich.h"

/*
int StringVergleich(char str1[], char str2[])
{
    return strncmp(str1,str2,3);
}*/

int main()
{
    printf("%d\t%c\n", StringVergleich(a,b), (char) StringVergleich(a,b));
    printf("%d\t%c\n", StringVergleich(b,a), (char) StringVergleich(b,a));
    printf("%d\t%c\n", StringVergleich(a,c), (char) StringVergleich(a,c));

    return 0;
}