#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    unsigned long long sum = 0;
    for (unsigned int i = 1; i < n; i++)
    {
        unsigned int x;
        std::cin >> x;
        sum += x;
    }

    std::cout << (unsigned long long)(n + 1) * n / 2 - sum;

    return 0;
}
