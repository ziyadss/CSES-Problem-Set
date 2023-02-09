#include <iostream>
#include <vector>

unsigned int solve(std::vector<std::vector<char>> &board)
{
    return 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    std::vector<std::vector<char>> chessboard(8, std::vector<char>(8, '.'));
    // '.' is free, '*' is reserved, 'Q' is queen

    for (auto &row : chessboard)
        for (auto &cell : row)
            std::cin >> cell;

    std::cout << solve(chessboard);

    return 0;
}
