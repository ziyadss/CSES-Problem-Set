#include <iostream>

int main()
{
    uint32_t n;
    std::cin >> n;

    uint32_t res = 1;
    while (n--)
        res = (res << 1) % 1000000007;

    std::cout << res;

    return 0;
}