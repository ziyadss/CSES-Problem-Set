#include <iostream>

int main()
{
    uint32_t t;
    std::cin >> t;

    while (t--)
    {
        int32_t y, x;
        std::cin >> y >> x;

        uint64_t m = std::max(y, x);
        uint64_t ans = m * m - m + 1 + (m % 2 ? x - y : y - x);

        std::cout << ans << '\n';
    }

    return 0;
}
