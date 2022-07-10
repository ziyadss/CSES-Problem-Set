#include <iostream>
#include <vector>

unsigned int solve(const std::vector<unsigned int> &p, unsigned long long group1 = 0, unsigned long long group2 = 0, size_t idx = 0)
{
    if (p.size() == idx)
        return llabs(group1 - group2);

    unsigned int x = p[idx];
    unsigned int y = solve(p, group1 + x, group2, idx + 1);
    unsigned int z = solve(p, group1, group2 + x, idx + 1);
    return std::min(y, z);
}

int main()
{
    unsigned int n;
    std::cin >> n;

    std::vector<unsigned int> p(n);
    for (auto &p_i : p)
        std::cin >> p_i;

    std::cout << solve(p);

    return 0;
}
