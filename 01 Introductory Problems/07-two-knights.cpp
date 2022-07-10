#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    for (unsigned int i = 1; i <= n; i++)
        std::cout << (unsigned long long)(i - 1) * (i + 4) * ((i - 3) * i + 4) / 2 << '\n';

    return 0;
}
