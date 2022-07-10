#include <algorithm>
#include <iostream>

int main()
{
    uint32_t t;
    std::cin >> t;

    while (t--)
    {
        uint32_t a, b;
        std::cin >> a >> b;

        uint32_t q = (a + b) >> 1;
        uint32_t r = (a + b) & 1;

        auto [mn, mx] = std::minmax(a, b);

        bool res = (mx <= 2 * mn) && ((q - r) % 3 == 0); // !((mx + mn) % 3 || mx * 2 < mn || mn * 2 < mx); ??

        std::cout << (res ? "YES\n" : "NO\n");
    }

    return 0;
}
