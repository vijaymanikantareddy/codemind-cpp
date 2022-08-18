#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)    return 0;
    return n%9==0? 9 : n%9;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}