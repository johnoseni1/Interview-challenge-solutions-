#include <iostream>
#include <vector>

//link: https://leetcode.com/problems/running-sum-of-1d-array/

std::vector<int> runningSum(std::vector<int> &nums)
{
    std::vector<int> runningSum(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        runningSum[i] = nums[i];
        if (i - 1 >= 0)
        {
            runningSum[i] += runningSum[i - 1];
        }
    }

    return runningSum;
}

int main(int argc, char const *argv[])
{

    std::vector<int> test1{1, 2, 3, 4};
    std::vector<int> test2{1, 1, 1, 1, 1};
    std::vector<int> test3{3, 1, 2, 10, 1};

    for (auto x : runningSum(test1))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    for (auto x : runningSum(test2))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    for (auto x : runningSum(test3))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    return 0;
}
