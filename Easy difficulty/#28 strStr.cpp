#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
    if (needle.length() == 0)
        return 0;
    if (haystack.length() == 0)
        return -1;

    int j = needle.length();
    string delta;
    for (int i = 0; i < haystack.length(); i++)
    {
        if (haystack[i] == needle[0])
        {
            if (!(haystack.substr(i, j)).compare(needle))
                return i;
        }
    }
    return -1;
}
int main()
{
    cout << strStr("", "");
    return 0;
}