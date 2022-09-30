#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int, int>mp;
    while(n--){
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto it: mp){
        if(it.second==1){
            cout<<it.first;
            break;
        }
    }
}