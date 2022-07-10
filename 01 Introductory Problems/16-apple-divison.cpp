#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    long long sum = 0;
    std::vector<int> p(n);
    for (auto &&p_i : p)
    {
        std::cin >> p_i;
        sum += p_i;
    }

    long long half = 0;
    int cases = 1 << n;
    for (int i = 0; i < cases; i++)
    {
        long long g = 0;
        for (int j = 0; j < n; j++)
            if (i & (1 << j))
                g += p[j];

        if (g <= sum / 2)
            half = std::max(g, half);
    }

    std::cout << sum / 2 - half;
    return 0;
}