#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        int i,j;
        vector <vector<int>> op;
        for(j=0;j<numRows;++j){
            vector<int> temp;            
            vector<int> it(j+1,1);
            if(j==0 || j==1)
            {op.push_back(it);continue;}
            
            for(i=1;i<j;++i){
                it.at(i)=op.at(j-1).at(i-1)+op.at(j-1).at(i);    
            }
            op.push_back(it);
        }
        return op;
    }

int main(){
    int len;
    cin>>len;
    vector<vector<int>> res=generate(len);
    for(vector<int> y: res){
        for(int x:y){
            cout<<x;
                }
        cout<<endl;
    }

    return 0;
}