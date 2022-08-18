#include<bits/stdc++.h>
using namespace std;
bool div(int n){
    int temp=n, len=0, cnt=0;
    while(temp)
    {
        int res = temp%10;
        if(res==0){
            return false;
        }
        if(n%res==0){
            cnt++;
        }
        len++;
        temp/=10;
    }
    return cnt==len? 1: 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a ; i<=b ; i++){
        if(div(i)){
            cout<<i<<" ";
        }
    }
}