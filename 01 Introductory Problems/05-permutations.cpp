#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    vector<int> res(n);
    for (int i = 0; i < n / 2; i++)
    {
        res[i] = 2 + 2 * i;
        res[i + n / 2] = 1 + 2 * i;
    }

    if (n % 2)
        res[n - 1] = n;

    for (auto &&x : res)
        cout << x << " ";

    return 0;
}