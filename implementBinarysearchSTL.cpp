#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> &nums)
{
    for (int i : nums)
    {
        cout << i;
    }
    cout << "\n";
}
int cmp(const void *a, const void *b)
{
    const int *ap = (int *)a;
    const int *bp = (int *)b;
    if (*ap < *bp)
        return -1;
    else if (*ap > *bp)
        return 1;
    else
        return 0;
}

int main()
{
    vector<int> st = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    cout << "initial vector:";
    printvector(st);
    sort(st.begin(), st.end(), greater<int>());
    cout << "des vec:";
    printvector(st);
    sort(st.begin(), st.end());
    cout << "sorted vector:";
    printvector(st);
    int temp;
    cout << "enter element to found\n";
    cin >> temp;
    binary_search(st.begin(), st.end(), temp) ? cout << "found\n" : cout << "NA\n";
    vector<int>::iterator rit;
    int *p = (int *)bsearch(&temp, &st[0], st.size(), sizeof(st[0]), cmp);
    if (p)
        cout << "found at " << (p - &st[0]) << endl;
    else
        cout << "NA in bsearch\n";

    return 0;
}