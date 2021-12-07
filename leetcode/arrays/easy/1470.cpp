#include <iostream>
#include <vector>

//link: https://leetcode.com/problems/running-sum-of-1d-array/

std::vector<int> shuffle(std::vector<int> &nums, int n)
{
    std::vector<int> shuffleArr(n * 2);
    shuffleArr[0] = nums[0];
    shuffleArr[nums.size() - 1] = nums[nums.size() - 1];

    int left = 0, right = n, index = 0;
    while (right < nums.size())
    {

        shuffleArr[index++] = nums[left++];
        shuffleArr[index++] = nums[right++];
    }

    return shuffleArr;
}

int main(int argc, char const *argv[])
{

    std::vector<int> test1{2, 5, 1, 3, 4, 7};
    std::vector<int> test2{1, 2, 3, 4, 4, 3, 2, 1};
    std::vector<int> test3{1, 1, 2, 2};

    for (auto x : shuffle(test1, 3))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    for (auto x : shuffle(test2, 4))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    for (auto x : shuffle(test3, 2))
    {
        std::cout << x << ", ";
    }
    std::cout << "\n";
    return 0;
}
