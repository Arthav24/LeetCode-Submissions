#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> i = {1, 2, 3, 4, 5, 6};
    cout << *max_element(i.begin(), i.end()) << endl;
    cout << *min_element(i.begin(), i.end()) << endl;
    cout << binary_search(i.begin(), i.end(), 3) << endl;
    ;
    cout << lower_bound(i.begin(), i.end(), 3) - i.begin() << endl;
    ;
    cout << upper_bound(i.begin(), i.end(), 3) - i.begin() << endl;

    cout << "b" << i.begin() - i.begin() << "e" << i.end() - i.begin() - 1;
    return 0;
}