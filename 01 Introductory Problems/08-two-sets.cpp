#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 4 && (n - 3) % 4)
        cout << "NO";
    else if (n % 2)
    {
        cout << "YES\n";

        cout << (n + 1) / 2 << '\n';
        int a = 1, b = n - 1;
        for (int i = 0; i <= n / 4; i++)
            cout << a++ << ' ' << b-- << ' ';

        cout << '\n'
             << n / 2 << '\n'
             << n << ' ';
        while (a <= b)
            cout << a++ << ' ';
    }
    else
    {
        cout << "YES\n";
        cout << n / 2 << '\n';
        int a = 1, b = n;
        for (int i = 0; i < n / 4; i++)
        {
            cout << a << ' ' << b << ' ';
            a += 2;
            b -= 2;
        }

        cout << '\n'
             << n / 2 << '\n';
        a = 2;
        b = n - 1;
        for (int i = 0; i < n / 4; i++)
        {
            cout << a << ' ' << b << ' ';
            a += 2;
            b -= 2;
        }
    }
    return 0;
}