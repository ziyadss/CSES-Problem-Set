#include <algorithm>
#include <iostream>

int main()
{
    unsigned int t;
    std::cin >> t;

    while (t--)
    {
        unsigned int a, b;
        std::cin >> a >> b;

        unsigned int q = (a + b) >> 1;
        unsigned int r = (a + b) & 1;

        auto [mn, mx] = std::minmax(a, b);

        bool res = (mx <= 2 * mn) && ((q - r) % 3 == 0); // !((mx + mn) % 3 || mx * 2 < mn || mn * 2 < mx); ??

        std::cout << (res ? "YES\n" : "NO\n");
    }

    return 0;
}
