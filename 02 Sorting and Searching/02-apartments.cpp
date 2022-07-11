#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector<int> a(n), b(m);
    for (int &a_i : a)
        std::cin >> a_i;
    for (int &b_i : b)
        std::cin >> b_i;

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    size_t i = 0, j = 0;
    int ans = 0;
    while (i < a.size() && j < b.size())
    {
        if (b[j] >= a[i] - k && b[j] <= a[i] + k)
            ans++, i++, j++;
        else if (b[j] > a[i] - k)
            i++;
        else
            j++;
    }

    std::cout << ans;

    return 0;
}