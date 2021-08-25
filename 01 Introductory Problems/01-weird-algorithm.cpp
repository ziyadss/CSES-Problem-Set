#include <iostream>

using std::cout;

int main()
{
    int n;
    std::cin >> n;

    cout << n;
    while (n > 1)
    {
        n = n % 2 ? 3 * n + 1 : n / 2;
        cout << n << " ";
    }

    return 0;
}