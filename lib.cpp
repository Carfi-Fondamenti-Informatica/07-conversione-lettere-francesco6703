#include "lib.h"

bool funzione(char a)
{
    if(a>=65 && a<=90)
    {
        a=a+32;
        return true;
    }
    else if(a>=97 && a<=122)
    {
        a=a-32;
        return true;
    }
    else
    {
        return false;
    }
}

char funz1(char a)
{
    if(a>=65 && a<=90)
    {
        a=a+32;
        return a;
    }

    if(a>=97 && a<=122)
    {
        a=a-32;
        return a;
    }
}
