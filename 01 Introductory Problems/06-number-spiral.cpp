#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long y, x;
        cin >> y >> x;

        long long m, ans;
        m = max(y, x);
        ans = m * m - m + 1 + (m % 2 ? x - y : y - x);

        cout << ans << '\n';
    }

    return 0;
}