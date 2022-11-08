#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if(n%2==0){
        int l = 0, r = n-1;
        while(l<r){
            cout<<arr[l]<<" "<<arr[r]<<" ";
            l++;
            r--;
        }
    }
    else{
        int l = 0, r= n-1;
        while(l<=r){
            if(l==r)
                cout<<arr[l]<<" 0";
            else
            cout<<arr[l]<<" "<<arr[r]<<" ";
            l++;
            r--;
        }
    }
}