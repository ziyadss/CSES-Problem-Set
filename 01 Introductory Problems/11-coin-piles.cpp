#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int c = a;
        a = max(c, b);
        b = min(c, b);

        int q = (a + b) / 2;
        int r = (a + b) % 2;

        bool res = (a <= 2 * b) && ((q - r) % 3 == 0); // !((a + b) % 3 || a * 2 < b || b * 2 < a); ??

        cout << (res ? "YES\n" : "NO\n");
    }

    return 0;
}