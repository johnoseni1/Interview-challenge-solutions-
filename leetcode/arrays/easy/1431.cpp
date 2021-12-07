#include <iostream>
#include <vector>
#include <bits/stdc++.h>

//link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies)
{

    std::vector<bool> result;
    int max_candies = INT_MIN;

    for (int x : candies)
    {
        max_candies = std::max(max_candies, x);
    }

    for (int x : candies)
    {
        (x + extraCandies >= max_candies) ? result.emplace_back(true) : result.emplace_back(false);
    }

    return result;
}

int main(int argc, char const *argv[])
{

    std::vector<int> test1{2, 3, 5, 1, 3};
    std::vector<int> test2{4, 2, 1, 1, 2};
    std::vector<int> test3{12, 1, 12};

    for (auto x : kidsWithCandies(test1, 3))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    for (auto x : kidsWithCandies(test2, 4))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    for (auto x : kidsWithCandies(test3, 2))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    return 0;
}
