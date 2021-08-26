#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++)
        cout << (i - 1) * (i + 4) * ((i - 3) * i + 4) / 2 << '\n';

    return 0;
}