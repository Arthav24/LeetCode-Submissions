#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (char i : s)
    {
        if (st.size() == 0)
            st.push(i);
        else if (st.top() == '(' && i == ')')
            st.pop();
        else if (st.top() == '[' && i == ']')
            st.pop();
        else if (st.top() == '{' && i == '}')
            st.pop();
        else
            st.push(i);
    }
    return (st.size() == 0) ? true : false;
}

int main()
{
    cout << isValid("({{})");
    return 0;
}