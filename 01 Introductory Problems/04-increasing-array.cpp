#include <iostream>
#include <vector>

int main()
{
    uint32_t n;
    std::cin >> n;

    std::vector<uint32_t> x(n);
    for (uint32_t &x_i : x)
        std::cin >> x_i;

    uint64_t res = 0;
    for (size_t i = 1; i < n; i++)
        if (x[i - 1] > x[i])
        {
            res += x[i - 1] - x[i];
            x[i] = x[i - 1];
        }

    std::cout << res;

    return 0;
}