#include <string.h>

int StringVergleich(char str1[], char str2[])
{
    return strncmp(str1,str2,3);
}