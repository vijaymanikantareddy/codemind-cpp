#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        string inp;
        cin>>inp;
        reverse(inp.begin(), inp.end());
        int res=0;
        for(int i=0 ; i<inp.size() ; i++){
            if(inp[i]=='1'){
                res += pow(2,i);
            }
        }
        cout<<res<<endl;
    }
}