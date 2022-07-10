#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    unsigned int res = 1;
    while (n--)
        res = (res << 1) % 1000000007;

    std::cout << res;

    return 0;
}
