#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    int bt_cnt=0, temp=n;
    while(temp){
        bt_cnt++;
        temp>>=1;
    }
    int val = pow(2, bt_cnt);
    return val-n-1;
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
}