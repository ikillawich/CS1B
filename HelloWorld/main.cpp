#include <iostream>
#include "log.h"




int main()
{
    for(int i=0; i < 10; i++) {
        log("hello World");
    }
    log("==========");
    int i = 0;
    while(i < 5) {
        log("hello World");        i++;
    }
    std::cin.get();
}
