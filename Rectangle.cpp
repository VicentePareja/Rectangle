#include <iostream>

int main()
{
    bool valid = false;
    int width;
    int height;
    while (!valid)
    {

        std::cout << "Enter the width of the rectangle: \n";
        std::cin >> width;

        std::cout << "Enter the height of the rectangle: \n";
        std::cin >> height;

        if (width >= 2 && height >= 2)
        {
            valid = true;
        }
        else
        {
            std::cout << "Enter a valid size (2x2 is the smallest posible size).\n";
        }
    }

    for (int i = 1; i <= width; i++)
    {
        std::cout << "*";
    }

    std::cout << "\n";

    for (int i2 = 1; i2 <= height; i2++)
    {
        std::cout << "*";
        for (int j = 1; j <= width - 2; j += 1)
        {
            std::cout << " ";
        }
        std::cout
            << "*\n";
    }

    for (int i = 1; i <= width; i += 1)
    {
        std::cout << "*";
    }
    std::cout << "\n";
    return 0;
}