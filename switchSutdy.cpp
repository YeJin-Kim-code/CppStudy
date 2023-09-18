#include <iostream>

void printColor(int num)
{
    if (num == 1)
        std::cout << "One";
    else if (num == 2)
        std::cout << "Two";
    else if (num == 3)
        std::cout << "Three";
    else if (num == 4)
        std::cout << "Four";
    else if (num == 5)
        std::cout << "Five";
    else
        std::cout << "Unknown";
}

int main()
{
    printColor(3);

    return 0;
}