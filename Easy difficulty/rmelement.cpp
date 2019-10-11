#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    vector<int>::iterator it;

    while (1)
    {
        it = find(nums.begin(), nums.end(), val);
        if (it == nums.end())
            break;
        else
            nums.erase(it);
    }
    return nums.size();
}
int main()
{
    vector<int> nums = {0, 0, 2, 3, 5, 5, 8};
    cout << removeElement(nums, 2) << endl;
    for (int i : nums)
        cout << i;
    return 0;
}