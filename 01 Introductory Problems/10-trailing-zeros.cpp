#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 0;
    while (n /= 5)
        res += n;

    cout << res;

    return 0;
}