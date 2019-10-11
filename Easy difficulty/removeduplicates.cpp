#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates2(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    if (nums.size() == 1)
        return 1;
    stack<int> stack;
    for (int i : nums)
    {
        if (stack.empty())
        {
            stack.push(i);
        }
        else if (stack.top() == i)
        {
            continue;
        }
        else
            stack.push(i);
    }
    while (!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }
    return 0;
}
int removeDuplicates3(vector<int> &nums)
{
    int orisize = nums.size();
    if (nums.size() == 0)
        return 0;
    if (nums.size() == 1)
        return 1;
    int temp, index = 0;
    for (int i : nums)
    {
        if (i != nums.back())
            nums.push_back(i);
    }
    vector<int>::iterator i1 = nums.begin(), it2 = nums.begin();
    while (orisize != 0)
    {
        it2++;
        --orisize;
    }
    nums.erase(i1, it2);
    return nums.size();
}
int removeDuplicates(vector<int> &nums)
{
    vector<int>::iterator it;
    it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), it));
    return nums.size();
}
int main()
{
    vector<int> nums = {0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4};
    cout << removeDuplicates(nums) << endl;
    for (int j : nums)
        cout << j;
    return 0;
}