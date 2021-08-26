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

    vector<int> even(n / 2);
    vector<int> odd(n / 2);

    for (int i = 0; i < n / 2; i++)
    {
        even[i] = 2 + 2 * i;
        odd[i] = 1 + 2 * i;
    }

    if (n % 2)
        odd.push_back(n);

    for (auto &&x : even)
        cout << x << " ";
    for (auto &&x : odd)
        cout << x << " ";

    return 0;
}