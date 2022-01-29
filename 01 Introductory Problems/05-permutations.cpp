#include <iostream>
#include <vector>

int main()
{
    uint32_t n;
    std::cin >> n;

    if (n == 2 || n == 3)
    {
        std::cout << "NO SOLUTION";
        return 0;
    }

    std::vector<uint32_t> res(n);
    for (size_t i = 0; i < n / 2; i++)
    {
        res[i] = 2 + 2 * i;
        res[i + n / 2] = 1 + 2 * i;
    }

    if (n % 2)
        res[n - 1] = n;

    for (uint32_t &res_i : res)
        std::cout << res_i << " ";

    return 0;
}