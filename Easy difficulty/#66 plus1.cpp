#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    if (digits.back() < 9)
    {
        digits.back() = ++digits.back();
        return digits;
    }
    else
    {
        if (digits[0] == 9)
            digits.emplace(digits.begin(), 0);
        digits.back() = 0;
        auto r = digits.rbegin();
        for (r = ++r; r != digits.rend(); ++r)
        {

            if (*r < 9)
            {
                *r = ++(*r);
                return digits;
            }
            else
                *r = 0;
        }
    }
    return digits = {0};
}
int main()
{
    //vector<int> nums={9,9};
    vector<int> nums = {6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 9};
    plusOne(nums);
    for (int i : nums)
        cout << i;

    return 0;
}

/*
long long num=0;
        long s=digits.size();
        for(int i=0;i<s;++i){
            num=num+(digits[i]*pow(10,(s-i-1)));
        }
        ++num;
        //cout<<num;
        digits.clear();
        while(num!=0){
            int t=num%10;
            digits.push_back(t);
            num=num/10;
        }
        reverse(digits.begin(),digits.end());
        return digits;
*/