#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double floorSqrt(long long x)
{
    double d = (0.5 * log10(x));
    return (double)(pow(10, d));
}
long long floorSqrt1(long long x)
{
    if (x == 0 || x == 1)
        return x;
    long long ans;
    long long start = 1, end = x;
    while (start <= end)
    {
        long long mid = start + ((end - start) / 2);
        cout << "mid" << mid << endl;
        if (mid * mid == x)
            return mid;
        if (mid * mid < x)
        {
            start = mid + 1;
            ans = mid;
        }
        else
            end = mid - 1;
    }
    return ans;
}
int main()
{
    long long n;
    cin >> n;
    cout << floorSqrt1(n);
}