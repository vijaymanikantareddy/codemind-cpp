#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<char, string>mp;
    mp['0']="000";
    mp['1']="001";
    mp['2']="010";
    mp['3']="011";
    mp['4']="100";
    mp['5']="101";
    mp['6']="110";
    mp['7']="111";
    while(n--){
        string res;
        string inp;
        cin>>inp;
        for(char i: inp){
            res += mp[i];
        }
        int cnt=0;
        string final;
        for(int i=0 ; i<res.size() ; i++){
            if(res[i]=='1'){
                cnt=i;
                break;
            }
        }
        for(int i=cnt ; i<res.size() ; i++){
            final+=res[i];
        }
        cout<<final<<"
";
    }
}