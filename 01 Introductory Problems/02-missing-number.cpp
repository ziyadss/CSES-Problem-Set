#include <iostream>

int main()
{
    uint32_t n;
    std::cin >> n;

    uint64_t sum = 0;
    for (int i = 1; i < n; i++)
    {
        uint32_t x;
        std::cin >> x;
        sum += x;
    }

    std::cout << (uint64_t)(n + 1) * n / 2 - sum;

    return 0;
}
