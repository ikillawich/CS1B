#include <iostream>

void log(const char* message);

int Multiply(int a, int b)
{
    log("Multiply");
    return a*b;
}

int main()
{
    std::cout << Multiply(7, 7) << std::endl;
    std::cin.get();
}
