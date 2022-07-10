#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    if (n % 4 && (n - 3) % 4)
        std::cout << "NO";
    else if (n % 2)
    {
        std::cout << "YES\n";

        std::cout << (n + 1) / 2 << '\n';
        unsigned int a = 1, b = n - 1;
        for (size_t i = 0; i <= n / 4; i++)
            std::cout << a++ << ' ' << b-- << ' ';

        std::cout << '\n'
                  << n / 2 << '\n'
                  << n << ' ';
        while (a <= b)
            std::cout << a++ << ' ';
    }
    else
    {
        std::cout << "YES\n";
        std::cout << n / 2 << '\n';
        unsigned int a = 1, b = n;
        for (size_t i = 0; i < n / 4; i++)
        {
            std::cout << a << ' ' << b << ' ';
            a += 2;
            b -= 2;
        }

        std::cout << '\n'
                  << n / 2 << '\n';
        a = 2;
        b = n - 1;
        for (size_t i = 0; i < n / 4; i++)
        {
            std::cout << a << ' ' << b << ' ';
            a += 2;
            b -= 2;
        }
    }
    return 0;
}
