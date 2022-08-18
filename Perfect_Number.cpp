#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, sum=0;
    cin>>a;
    for(int i=1 ; i<=a/2 ; i++){
        if(a%i==0){
            sum+=i;
        }
    }
    sum==a? cout<<"True" : cout<<"False";
}