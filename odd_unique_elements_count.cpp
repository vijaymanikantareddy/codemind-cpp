#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    unordered_map<int, int> mp;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto it: mp){
        if(it.first%2!=0){
            cnt++;
        }
    }
    cout<<cnt;
}