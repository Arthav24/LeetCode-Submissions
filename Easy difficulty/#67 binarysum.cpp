#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string dtob(int n)
{
    string r;
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            r.append("1");
        else
            r.append("0");
    }
    return r;
}
int btoint(string x)
{
    int no = 0;
    for (int i = 0; i < x.length(); ++i)
    {
        no += ((x[i] == '1' ? 1 : 0) * pow(2, (x.length() - 1 - i)));
    }
    return no;
}
string addBinary1(string a, string b)
{
    string res = dtob(btoint(a) + btoint(b));
    return res;
}
string addBinary(string a, string b)
{
    int s = 0;
    string res;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        s += ((i >= 0) ? a[i] - '0' : 0);
        s += ((j >= 0) ? b[j] - '0' : 0);
        res = char(s % 2 + '0') + res;
        s /= 2;
        i--;
        j--;
    }
    return res;
}

int main()
{
    cout << addBinary("1010", "1011");
    return 0;
}