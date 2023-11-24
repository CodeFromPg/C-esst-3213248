#include <stdio.h>
#include <stdlib.h>

// Funktion tausche, die mit call-by-reference arbeiten soll
void tausche(int *zahl1, int *zahl2)
{
    int hilf;
     
    hilf = *zahl1; 
    *zahl1 = *zahl2;
    *zahl2 = hilf;
}


int main() 
{
    int a = 1;
    int b = 2;
    printf("%d %d\n",a,b);
    tausche(&a, &b);
    printf("%d %d\n",a,b);
    tausche(&a, &b);
    printf("%d %d\n",a,b);
    return 0;
}
