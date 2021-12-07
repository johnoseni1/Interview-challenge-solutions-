//Problem link https://www.algoexpert.io/questions/Two%20Number%20Sum
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

//Time O(n) Space O(n)
vector<int> twoNumberSum(vector<int> &numbers, int targetSum)
{

    unordered_set<int> targetSet;

    for (int number : numbers)
    {

        //Get the number needed to reach the targetSum
        //Ex targetSUm = 10, number = 6, 10-6=4, we need to find 4
        int possiblePair = targetSum - number;
        //If the possible pair is on the set then return the pair that added give the sum
        if (targetSet.find(possiblePair) != targetSet.end())
        {
            return {number, possiblePair};
        }else{

            targetSet.insert(number);
        }
    }

    return {};
}

int main(int argc, char const *argv[])
{

    vector<int> numbers{3, 5, -4, 8, 11, 1, -1, 6};
    int targetSum = 10;

    for (int x : twoNumberSum(numbers, targetSum))
    {
        cout << x << ", ";
    }

    return 0;
}
