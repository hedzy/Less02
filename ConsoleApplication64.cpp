#include <iostream>

int main()
{
    std::cout << "vvod 1 chislo: ";
    int x;
    std::cin >> x;
    std::cout << "vvod 2 chislo: ";
    int y;
    std::cin >> y;
    std::cout << "Sum: " + (x+y);
    std::cout << "Ymn: " + (x * y);
}
