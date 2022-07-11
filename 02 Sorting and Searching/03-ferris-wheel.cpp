#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int n, x;
    std::cin >> n >> x;

    std::vector<int> p(n);
    for (int &p_i : p)
        std::cin >> p_i;

    std::sort(p.begin(), p.end());

    int i = 0, j = p.size() - 1;
    int ans = 0;
    while (i <= j && j >= 0 && i < n)
    {
        if (p[i] + p[j] <= x)
            ans++, i++, j--;
        else
            ans++, j--;
    }

    std::cout << ans;

    return 0;
}