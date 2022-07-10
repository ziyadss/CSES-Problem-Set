#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    unsigned int res = 0;
    while (n /= 5)
        res += n;

    std::cout << res;

    return 0;
}
