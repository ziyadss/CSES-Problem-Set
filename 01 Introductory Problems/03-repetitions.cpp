#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    int max = 1, curr = 1;

    for (size_t i = 1; i < s.size(); i++)
        if (s[i] != s[i - 1])
            curr = 1;
        else if (++curr > max)
            max = curr;

    std::cout << max;

    return 0;
}
