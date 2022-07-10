#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> b(1, 0), c(1, 0), a(n + 1);
    std::iota(a.begin(), a.end(), 0);

    int k = (1 << n) - 1;
    std::cout << k << '\n';

    if (n % 2 == 0)
    {
        while (c.size() <= n)
        {
            if (a.back() > b.back())
            {
                b.push_back(a.back());
                a.pop_back();
                std::cout << "1 2\n";
            }
            else
            {
                a.push_back(b.back());
                b.pop_back();
                std::cout << "2 1\n";
            }

            if (a.back() > c.back())
            {
                c.push_back(a.back());
                a.pop_back();
                std::cout << "1 3\n";
            }
            else
            {
                a.push_back(c.back());
                c.pop_back();
                std::cout << "3 1\n";
            }

            if (b.back() > c.back())
            {
                c.push_back(b.back());
                b.pop_back();
                std::cout << "2 3\n";
            }
            else
            {
                b.push_back(c.back());
                c.pop_back();
                std::cout << "3 2\n";
            }
        }
    }
    else
    {
        while (c.size() <= n)
        {
            if (a.back() > c.back())
            {
                c.push_back(a.back());
                a.pop_back();
                std::cout << "1 3\n";
            }
            else
            {
                a.push_back(c.back());
                c.pop_back();
                std::cout << "3 1\n";
            }

            if (a.back() > b.back())
            {
                b.push_back(a.back());
                a.pop_back();
                std::cout << "1 2\n";
            }
            else
            {
                a.push_back(b.back());
                b.pop_back();
                std::cout << "2 1\n";
            }

            if (b.back() > c.back())
            {
                c.push_back(b.back());
                b.pop_back();
                std::cout << "2 3\n";
            }
            else
            {
                b.push_back(c.back());
                c.pop_back();
                std::cout << "3 2\n";
            }
        }
    }
    return 0;
}