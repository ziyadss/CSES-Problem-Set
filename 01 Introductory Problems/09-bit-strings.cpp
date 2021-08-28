#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 1;
    while (n--)
        res = 2 * res % 1000000007;

    cout << res;

    return 0;
}