#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    unsigned int count = 1 << n;
    char *bitStrings = new char[count * (n + 1) + 1];

    for (size_t i = 0; i < count; i++)
    {
        unsigned int num = i / 2 ^ i;

        for (size_t j = 0; j < n; j++)
        {
            bitStrings[i * (n + 1) + j] = num % 2 + '0';
            num /= 2;
        }

        bitStrings[i * (n + 1) + n] = '\n';
    }

    std::cout << bitStrings;

    return 0;
}
