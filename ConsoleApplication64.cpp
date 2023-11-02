#include <iostream>

int main()
{
    int vvod = 0;
    do {
        std::cout << "Hello mir?[1/2]";
        std::cin >> vvod;
        if (vvod == 1) { std::cout << "xxxmanera krutit mir"; break; };
        if (vvod == 2) { std::cout << "Jalko"; break; };
    } while (vvod != 0);
    std::cout << "DKFDLFSD:JK";
}
