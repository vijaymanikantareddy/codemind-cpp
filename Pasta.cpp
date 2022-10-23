#include<bits/stdc++.h>
using namespace std;
bool fun(int m, vector<int> a, int n, vector<int> b)
{
    for(int i=0 ; i<n ; i++)
    {
        bool se = true;
        for(int j=0 ; j<m ; j++)
        {
            if(a[j]!=-1 and a[j]==b[i]){
                a[j]=-1;
                se = false;
            }
        }
        if(se){
            return false;
        }
    }
    return true;
}

int main()
{
    int m, n;
    cin>>m>>n;
    vector<int> a(m);
    vector<int> b(n);
    for(int i=0 ; i<m ; i++){
        cin>>a[i];
    }
    for(int j=0 ; j<n ; j++){
        cin>>b[j];
    }
    if(fun(m,a,n,b)) cout<<"Yes";
    else cout<<"No";
}