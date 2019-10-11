#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    if (n <= 0)
        return 0;
    else
    {
        int stair[n + 1];
        stair[0] = 1;
        stair[1] = 1;
        for (int i = 2; i <= n; i++)
            stair[i] = stair[i - 1] + stair[i - 2];
    
    return stair[n];
    }
}
int main()
{
    cout << climbStairs(4);

    return 0;
}