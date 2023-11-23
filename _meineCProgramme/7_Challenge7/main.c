#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id;
    printf("Bitte geben Sie ein einzelnes Zeichen als Zugangscode ein:\n");
    id = getchar();
    
    //Umschreiben des Ausdrucks mit dem Bedingungsoperator
    //1. if-else
    if (id == 'x')
    {
        printf("1: Sie haben Zugang\n");
    }
    else
    {
        printf("1: Die Id war falsch\n");
    }
    //2. switch-case
    switch (id)
    {
        case 'x': {
            printf("2: Sie haben Zugang\n");
            break;
        }
        default:{
            printf("2: Die Id war falsch\n");
            break;
        }
    }
     

    printf(id=='x'? "Sie haben Zugang\n": "Die Id war falsch\n");
    return 0;
}
