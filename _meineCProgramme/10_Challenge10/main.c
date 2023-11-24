#include <stdio.h>
#include <stdlib.h>

/*
//Challenge 10:
Mache ein dynamisches Array mit Ganzzahlen und Gleitkommzahlen und gib dieses aus
Dynamische Ermittlung wie groß das Array ist
Programm soll erkennen, ob es eine Ganzzahl oder Gleitkommazahl ist, danach richtiges Ausgabeformat wählen
*/
int main()
{
    //Variablen
    int i;
    double feld[] = {1, 4.3, 56.86, 78, 65.123, 124, 235, 56.06, 2.03};
    double erg;

    for (i = 0; i < sizeof(feld)/sizeof(double); i++)
    {
        erg = feld[i] / (int)feld[i];

        if (erg == 1)
        {
            printf("%d\t", (int)feld[i]);
        }
        else
        {
            printf("%f\t", feld[i]);
        }
    }
    
    printf("\n");
    return 0;
}