#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll y, x, m, ans;
        cin >> y >> x;

        m = max(y, x);
        ans = m * m - m + 1 + (m % 2 ? x - y : y - x);

        cout << ans << '\n';
    }

    return 0;
}