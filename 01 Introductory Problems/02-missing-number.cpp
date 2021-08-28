#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{

    ll n;
    cin >> n;

    ll sum = 0;
    for (int i = 1; i < n; ++i)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << n++ * n / 2 - sum;

    return 0;
}