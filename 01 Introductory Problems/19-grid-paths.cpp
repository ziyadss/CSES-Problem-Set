#include <iostream>
#include <string>

unsigned int solve(const std::string &path, char i = 0, char j = 0, size_t idx = 0, char prev = '\0')
{
    if (i == 6 && j == 0)
        return 1;

    if (i < 0 || i > 6 || j < 0 || j > 6)
        return 0;

    size_t steps = path.size() - idx;
    size_t diff = 6 - i + j;
    if (steps == 0 || diff > steps || (diff == 0 && steps % 2 == 1))
        return 0;

    if (path[idx] == 'U' && prev != 'D' && i > 0)
        return solve(path, i - 1, j, idx + 1);
    if (path[idx] == 'D' && prev != 'U' && i < 6)
        return solve(path, i + 1, j, idx + 1);
    if (path[idx] == 'L' && prev != 'R' && j > 0)
        return solve(path, i, j - 1, idx + 1);
    if (path[idx] == 'R' && prev != 'L' && j < 6)
        return solve(path, i, j + 1, idx + 1);
    if (path[idx] == '?')
    {
        unsigned int acc = 0;
        if (prev != 'U' && i > 0)
            acc += solve(path, i - 1, j, idx + 1, 'U');
        if (prev != 'D' && i < 6)
            acc += solve(path, i + 1, j, idx + 1, 'D');
        if (prev != 'L' && j > 0)
            acc += solve(path, i, j - 1, idx + 1, 'L');
        if (prev != 'R' && j < 6)
            acc += solve(path, i, j + 1, idx + 1, 'R');
        return acc;
    }
    return 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    std::string path;
    std::cin >> path;

    std::cout << solve(path);

    return 0;
}