#include <stdlib.h>
#include <stdio.h>

int main()
{
    //Challenge 8: Gib alle Zeichen von Dez 33 bis 126 aus (Zahl    Zeichen)
    int i;

    for (i = 33; i <= 126; i++)
    {
        printf("%d\t%c\n",i,(char)i);
    }
    
    return 0;
}