#include <iostream>

int main()
{
    unsigned int t;
    std::cin >> t;

    while (t--)
    {
        int y, x;
        std::cin >> y >> x;

        unsigned long long m = std::max(y, x);
        unsigned long long ans = m * m - m + 1 + (m % 2 ? x - y : y - x);

        std::cout << ans << '\n';
    }

    return 0;
}
