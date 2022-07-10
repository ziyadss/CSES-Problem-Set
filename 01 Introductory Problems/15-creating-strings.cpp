#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());

    std::string res;
    uint32_t count = 0;
    do
    {
        res += ('\n' + s);
        count++;
    } while (std::next_permutation(s.begin(), s.end()));

    std::cout << count << res;

    return 0;
}