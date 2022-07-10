#include <iostream>
#include <vector>

int main()
{
    unsigned int n, prev, curr;
    std::cin >> n >> prev;

    unsigned long long res = 0;
    for (unsigned int i = 1; i < n; i++)
    {
        std::cin >> curr;
        if (prev > curr)
            res += prev - curr;
        else
            prev = curr;
    }

    std::cout << res;

    return 0;
}
