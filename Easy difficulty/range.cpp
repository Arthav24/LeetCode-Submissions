#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> r = {-1, -1};
    if (nums.size() == 0)
    {
        return r = {-1, -1};
    }
    int left = 0, right = nums.size() - 1;
    while (left <= right)
    {
        long mid = left + (right - left) / 2;
        if (nums[mid] == target || nums[mid] > target)
        {
            right = mid - 1;
        }
        else
            left = mid + 1;
        //else right=mid-1;
    }

    return r;
}

int main()
{
    vector<int> q = {5, 6, 8, 8, 8, 8, 10, 11};
    vector<int> res = searchRange(q, 8);
    cout << res[0] << res[1];

    return 0;
}