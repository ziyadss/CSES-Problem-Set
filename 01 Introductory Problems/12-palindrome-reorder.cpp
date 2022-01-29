#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    uint32_t counts[26] = {};
    for (char &c : s)
        counts[c - 'A']++;

    uint32_t odd = 0, oddIdx = -1;
    for (size_t i = 0; i < 26; i++)
        if (counts[i] % 2)
        {
            odd++;
            oddIdx = i;
        }

    if (odd ^ s.length() & 1) // 0 or 1 odd, not same s.length() parity
        std::cout << "NO SOLUTION";
    else
    {
        for (size_t i = 0; i <= 25; i++)
            for (size_t j = 0; j < counts[i] / 2; j++)
                std::cout << (char)('A' + i);

        if (odd)
            std::cout << (char)('A' + oddIdx);

        for (size_t i = 0; i <= 25; i++)
            for (size_t j = 0; j < counts[25 - i] / 2; j++)
                std::cout << (char)('A' + 25 - i);
    }

    return 0;
}