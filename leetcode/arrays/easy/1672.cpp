#include <iostream>
#include <vector>
#include <bits/stdc++.h>

//link: https://leetcode.com/problems/richest-customer-wealth/

int maximumWealth(std::vector<std::vector<int>> &accounts)
{

    int max_wealth = INT_MIN;
    int current_wealth = 0;
    for (auto row : accounts)
    {
        for (int money : row)
        {
            current_wealth += money;
        }
        max_wealth = std::max(max_wealth, current_wealth);
        current_wealth = 0;
    }

    return max_wealth;
}

int main(int argc, char const *argv[])
{

    std::vector<std::vector<int>> test1{{1, 2, 3}, {3, 2, 1}};
    std::vector<std::vector<int>> test2{{1, 5}, {7, 3}, {3, 5}};
    std::vector<std::vector<int>> test3{{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};

    std::cout << maximumWealth(test1) << " \n";
    std::cout << maximumWealth(test2) << " \n";
    std::cout << maximumWealth(test3) << " \n";

    return 0;
}
