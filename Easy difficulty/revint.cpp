#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long prev = 0, rev = 0;
    bool nflag = false;
    if (x >= 2147483647 || x <= -2147483648)
        return 0;
    if (x < 0)
    {
        nflag = true;
        x = abs(x);
    }
    while (x != 0)
    {
        int temp = x % 10;
        if ((rev * 10) > 2147483647)
            return 0;
        else
            rev = (rev * 10) + temp;
        //if((rev-temp)/10 !=prev) return 0;
        prev = rev;
        x = x / 10;
    }
    return (nflag == true) ? -rev : rev;
}

int main()
{

    cout << reverse(2147483647);

    return 0;
}