#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n);
    for (auto &&x_i : x)
        cin >> x_i;

    long long res = 0;
    for (int i = 1; i < n; ++i)
        if (x[i - 1] > x[i])
        {
            res += x[i - 1] - x[i];
            x[i] = x[i - 1];
        }

    cout << res;

    return 0;
}