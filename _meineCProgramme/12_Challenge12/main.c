#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char t1[] = "Hello world\0";
    char t2[] = "Hello world";

    //Länge ermitteln (Unterschied mit/ohne \0)
    printf("t1: %d\n", sizeof(t1));
    printf("t2: %d\n", sizeof(t2));
    //Beide haben die Länge 11

    //Iterieren über die Strings
    printf("String t1\n");

    for (i = 0; i < sizeof(t1); i++)
    {
        printf("%c\t",t1[i]);
    }
    printf("\nLETZTES ZEICHEN: %c\t%d\n",t1[i],(int)t1[i]);

    printf("String t2\n");

    for (i = 0; i < sizeof(t2); i++)
    {
        printf("%c\t",t2[i]);
    }
    printf("\nLETZTES ZEICHEN: %c\t%d\n",t2[i],(int)t2[i]);

    return 0;
}
