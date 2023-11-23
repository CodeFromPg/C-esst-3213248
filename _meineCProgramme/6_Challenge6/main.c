#include <stdio.h>
#include <stdlib.h>

/*
Die Funktion aufab muss ausprogrammiert werden.
Wenn �bergabewert kleiner als 5, soll R�ckgabewert um den Wert 1 erh�ht werden.
Andernfalls soll der R�ckgabewert um den Wert 1 reduziert werden.
*/

int aufab(int zahl);

int main()
{
    printf("Uebergabewert an die Funktion ist %d.\tRueckgabewert der Funktion ist %d.\n",2,aufab(2));
    printf("Uebergabewert an die Funktion ist %d.\tRueckgabewert der Funktion ist %d.\n",5,aufab(5));
    printf("Uebergabewert an die Funktion ist %d.\tRueckgabewert der Funktion ist %d.\n",8,aufab(8));
    printf("Uebergabewert an die Funktion ist %d.\tRueckgabewert der Funktion ist %d.\n",1,aufab(1));
    printf("Uebergabewert an die Funktion ist %d.\tRueckgabewert der Funktion ist %d.\n",-10,aufab(-10));
    printf("Uebergabewert an die Funktion ist %d.\tRueckgabewert der Funktion ist %d.\n",15,aufab(15));
    return 0;
}

int aufab(int zahl)
{
    int zwe = (zahl < 5) ? (zahl+=1) : (zahl-=1);
    return zwe;
}
