#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print_series(int n)
{

    unsigned int result = 1;
    for (int i = 2; i < n; i++)
        if (__gcd(i, n) == 1)
            result++;
    cout << result;
}

int main()
{
    int t_cases;
    cin >> t_cases;
    while (t_cases != 0)
    {
        int n;
        cin >> n;
        for (int j = 1; j <= n; j++)
            print_series(j);

        --t_cases;
        cout << endl;
    }
    return 0;
}
