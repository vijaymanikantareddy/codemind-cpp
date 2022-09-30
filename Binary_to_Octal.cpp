#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string, char>mp;
    mp["000"]='0';
    mp["001"]='1';
    mp["010"]='2';
    mp["011"]='3';
    mp["100"]='4';
    mp["101"]='5';
    mp["110"]='6';
    mp["111"]='7';
    while(n--)
    {
        string inp;
        cin>>inp;
        int le=inp.size();
        int d;
        string temp, res;
        if(le%3==1) temp="00"+temp;
        else if(le%3==2) temp="0"+temp;
        temp+=inp;

        for(int i=0 ; i<temp.size() ; i+=3){
            string t="";
            t+=temp[i];
            t+=temp[i+1];
            t+=temp[i+2];
            res += mp[t];
        }
        cout<<res<<endl;
    }
}