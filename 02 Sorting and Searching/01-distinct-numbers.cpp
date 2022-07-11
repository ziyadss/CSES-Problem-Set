#include <iostream>
#include <iterator>
#include <sstream>
#include <unordered_set>

int main()
{
    int n;
    std::cin >> n;

    std::stringstream ss;
    std::cin >> ss.rdbuf();
    std::cout << std::unordered_set<int>(std::istream_iterator<int>(ss), std::istream_iterator<int>()).size();

    return 0;
}