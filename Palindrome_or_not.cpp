#include<bits/stdc++.h>
using namespace std;
bool palin(string s)
{
    int l=0, r=s.size()-1;
    while(l<=r){
        char a = toupper(s[l]);
        char b = toupper(s[r]);
        if(a!=b){
            return false;
        }
        l++;
        r--;
    }
}
int main()
{
    string s;
    cin>>s;
    if(palin(s)){
        cout<<"True";
    }
    else cout<<"False";
}