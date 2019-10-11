#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
    vector<int> oddgt, maxgt;
    string str;
    int x;
    while (true)
    {
        getline(cin, str);
        x = stoi(str);
        if (x > 0)
        {
            if (x % 2 == 1)
            {
                oddgt.push_back(x);
            }
            else
            {
                if (oddgt.size() > 0)
                {
                    make_heap(oddgt.begin(), oddgt.end());
                    maxgt.push_back(oddgt.front());
                    oddgt.clear();
                }
            }
        }
        else
            break;
    }
    int sum = 0;
    for (int j : maxgt)
        sum += j;
    cout << (sum / maxgt.size());

    return 0;
}

/*
int main(){
    vector<int> oddgt,maxgt;
    string str;
    int x;
    while(true)
        {
            getline(cin,str);
            x=stoi(str);
            if(x>0){
                if(x%2==1){
                    oddgt.push_back(x);
                }
                else { if(oddgt.size()>0){
                    //make_heap(oddgt.begin(),oddgt.end());
                    maxgt.push_back(*max_element(oddgt.begin(),oddgt.end()));

                    oddgt.clear();}
                }}
            else 
                break;
        }
    int sum=0;
    //for (int j:maxgt) sum+=j;
    sum=accumulate(maxgt.begin(),maxgt.end(),0);
    cout<<(sum/maxgt.size());
    return 0;
    
}
*/