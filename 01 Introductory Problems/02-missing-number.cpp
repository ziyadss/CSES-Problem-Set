#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 1; i < n; ++i)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << (long long)n++ * n / 2 - sum;

    return 0;
}