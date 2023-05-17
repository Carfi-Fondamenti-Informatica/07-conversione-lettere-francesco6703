#include <iostream>
#include "lib.h"

int main() {
char a;
bool x;
    std::cin >> a ;
x=funzione(a);
if (x == false)
{
    std::cout << "errore"<<std::endl;
}
else if (x == true)
{
    a=funz1(a);
    std::cout << a<< std::endl;
}
    return 0;
}
