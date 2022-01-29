#include <iostream>

int main()
{
    uint32_t n;
    std::cin >> n;

    uint32_t count = 1 << n;
    char *bitStrings = new char[count * (n + 1) + 1];

    for (size_t i = 0; i < count; i++)
    {
        uint32_t num = i / 2 ^ i;

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