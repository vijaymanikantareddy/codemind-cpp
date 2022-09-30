#include<bits/stdc++.h>
using namespace std;
bool fun(int a, int b){
    if(abs(a-b)==1){
        return true;
    }
    if(a+b==11){
        return true;
    }
    return false;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(fun(a,b)){
        cout<<"Yes";
    }
    else cout<<"No";
}