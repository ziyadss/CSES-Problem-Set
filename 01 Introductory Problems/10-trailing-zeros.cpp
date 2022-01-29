#include <iostream>

int main()
{
    uint32_t n;
    std::cin >> n;

    uint32_t res = 0;
    while (n /= 5)
        res += n;

    std::cout << res;

    return 0;
}