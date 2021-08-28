#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int counts[26] = {};
    for (auto &&c : s)
        counts[c - 'A']++;

    int odd = 0, oddIdx = -1;
    for (int i = 0; i < 26; i++)
        if (counts[i] % 2)
        {
            odd++;
            oddIdx = i;
        }

    if (odd != s.length() % 2)
        cout << "NO SOLUTION";
    else
    {
        for (int i = 0; i <= 25; i++)
            for (int j = 0; j < counts[i] / 2; j++)
                cout << (char)('A' + i);

        if (odd)
            cout << (char)('A' + oddIdx);

        for (int i = 25; i >= 0; i--)
            for (int j = 0; j < counts[i] / 2; j++)
                cout << (char)('A' + i);
    }

    return 0;
}