#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double p, t, r;
    cin>>p>>r>>t;
    double ci= p*pow((1+r/100), t);
    cout<<fixed<<setprecision(2)<<ci;
}