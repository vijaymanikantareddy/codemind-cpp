#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        string res;
        while(a){
            if(a%2==1){
                res += '1';
            }
            else res+='0';
            a/=2;
        }
        reverse(res.begin(), res.end());
        cout<<res<<endl;
    }
}