#include <iostream>
#include <vector>

int main()
{
    unsigned int n;
    std::cin >> n;

    if (n == 2 || n == 3)
    {
        std::cout << "NO SOLUTION";
        return 0;
    }

    std::vector<unsigned int> res(n);
    for (unsigned int i = 0; i < n / 2; i++)
    {
        res[i] = 2 + 2 * i;
        res[i + n / 2] = 1 + 2 * i;
    }

    if (n % 2)
        res[n - 1] = n;

    for (unsigned int res_i : res)
        std::cout << res_i << " ";

    return 0;
}
