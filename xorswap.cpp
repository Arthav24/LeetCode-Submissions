#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"A:";cin>>a;
    cout<<"\nB:";cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"swapped"<<"A:"<<a<<" B:"<<b;

    return 0;
}