#include <iostream>

int main()
{
    uint32_t n;
    std::cin >> n;

    for (uint32_t i = 1; i <= n; i++)
        std::cout << (uint64_t)(i - 1) * (i + 4) * ((i - 3) * i + 4) / 2 << '\n';

    return 0;
}
