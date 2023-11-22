#include <stdio.h>

int main()
{
    //Challenge 4.1: Herausfinden was Steuerzeichen bewirken

    printf("Hallo\nWelt\n");    //\n -> Neue Zeile
    printf("Hallo\bWelt\n");    //\b -> entferne ein Zeichen links
    printf("Hallo\tWelt\n");    //\t -> Tabulator
    printf("Hallo\vWelt\n");    //\v -> Zeilenumbruch und fortsetzen angleicher Stelle
    printf("Hallo\aWelt\n");    //\a -> Beep Ton

    //Challenge 4.2: Herausfinden was Formate bei Variablen ausgabe bedeuten
    int v = 1;

    printf("Variable %d.\n",v);   //%d -> Format Ganzzahl
    printf("Variable %c.\n",v);   //%c -> Format Zeichen
    printf("Variable %f.\n",v);   //%f -> Format Fließkommazahl

    return 0;
}