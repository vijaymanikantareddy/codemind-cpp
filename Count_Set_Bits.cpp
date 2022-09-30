#include<bits/stdc++.h>
using namespace std;
int fun(int a)
{
    int res=0;
    while(a){
        if(a&1) res++;
        a>>=1;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        cout<<fun(a)<<"
";
    }
}