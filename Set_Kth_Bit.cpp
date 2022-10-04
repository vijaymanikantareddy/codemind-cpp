#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int d = 1<<b;
    cout<<(a|d);
}