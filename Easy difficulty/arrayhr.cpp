#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t_cases, len_ar, pos, temp;
    cin >> t_cases;
    while (t_cases != 0)
    {
        vector<int> ar;
        cin >> len_ar >> pos;
        while (len_ar != 0)
        {
            cin >> temp;
            ar.push_back(temp);
            --len_ar;
        }

        vector<int>::iterator it = ar.begin();
        advance(it, pos);
        int pivot = ar[pos];

        vector<int> ar1(ar.begin(), it);
        vector<int> ar2(++it, ar.end());
        sort(ar1.begin(), ar1.end());
        sort(ar2.begin(), ar2.end());
        for (int i : ar1)
            cout << i << " ";
        cout << pivot << " ";
        for (int j = 0; j < ar2.size(); j++)
            cout << ar2[j] << " ";
        cout << "\n";
        --t_cases;
    }

    return 0;
}
/*1
5 2
5 4 3 2 1
4 5 3 1 2

*/