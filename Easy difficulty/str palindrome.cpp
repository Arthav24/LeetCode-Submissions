#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    string str = to_string(x);
    cout << "x:" << str;
    vector<char> rst;
    for (int i = str.length() - 1; i >= 0; --i)
        rst.push_back(str[i]);
    string r = string(rst.begin(), rst.end());
    cout << "r:" << r;
    if (str.compare(r) == 0)
        return true;
    else
        return false;
}

int main()
{
    isPalindrome(-123);
    return 0;
}