#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s)
{
    char tmp;
    int ss = s.size();
    for (int i = 0; i < (ss / 2); ++i)
    {
        tmp = s[i];
        s[i] = s[ss - 1 - i];
        s[ss - 1 - i] = tmp;
    }
}
int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    //reverse(s.begin(),s.end());
    /*
    for(int i=0;i<s.size()/2;++i)
    swap(s[i],s[s.size()-i-1]);
    */
    /*
    int i=0;
        int j=s.size()-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
    */
    for (char c : s)
        cout << c;
    return 0;
}