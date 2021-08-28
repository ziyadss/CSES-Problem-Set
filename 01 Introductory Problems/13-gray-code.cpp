#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 1 << n;
    char *bitStr = new char[count * (n + 1) + 1]{};

    for (int i = 0; i < count; i++)
    {
        int num = i / 2 ^ i;

        for (int j = 0; j < n; j++)
        {
            bitStr[i * (n + 1) + j] = num % 2 + '0';
            num /= 2;
        }

        bitStr[i * (n + 1) + n] = '\n';
    }

    cout << bitStr;

    return 0;
}