#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d;
    cin>>n;
    d=n%10;
    if(d==0)
        cout<<n/10;
    else if(n<0)
    {
        d=n/10;
        cout<<d-1;
    }
    else
    {
        d=n/10;
        cout<<d;
    }
}