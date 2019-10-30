#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 vector<int> getRow(int rowIndex) {
        int i,j;
        vector <vector<int>> op;
        for(j=0;j<rowIndex+1;++j){
            vector<int> temp;            
            vector<int> it(j+1,1);
            if(j==0 || j==1)
            {op.push_back(it);continue;}
            
            for(i=1;i<j;++i){
                it.at(i)=op.at(j-1).at(i-1)+op.at(j-1).at(i);    
            }
            op.push_back(it);
        }
        return op[rowIndex];
    }

int main(){
    int len;
    cin>>len;
    vector<int> res=getRow(len);
    for(int y: res){
            cout<<y;
                }
    
    

    return 0;
}