#include <stdio.h>
#include <stdlib.h>

//Globale Variable
int i = 1;

void test1() //nur lokales i aber behält den Wert 2
{
    static int i = 2;
    //printf("test1: %d\n",i);
}

void test2()    //globales i wird ausgegeben
{
    printf("test2: %d\n",i);
}

void test3(int i)   //i welches von main zugewiesen wird
{
    printf("test3: %d\n",++i);
}

int main()
{
    //Challenge 9: Verhaltensweisen und Gültigkeit von Variablen erkennen
    test1();            //lokales static i wird in test1 auf 2 gesetzt
    printf("%d\n",i);   //globales i = 1 
    test2();            //globales i = 1
    test3(42);          //übergebenes i = 43
    printf("%d\n",i);   //globales i = 1

    return 0;
}