#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>m>>n;
    int arr[m][n];
    int cnt=0;
    for(int i=0 ; i<m ; i++)
        for(int j=0 ; j<n ; j++)
            cin>>arr[i][j];
    
    for(int i=0 ; i<m ; i++){
        bool set = true;
        for(int j=0 ; j<n-1 ; j++){
            if(arr[i][j]>=arr[i][j+1]){
                set = false;
            }
        }
        if(set){
            cnt++;
        }
    }
    for(int i=0 ; i<m ; i++){
        bool set = true;
        for(int j=0 ; j<n-1 ; j++){
            if(arr[i][j]<=arr[i][j+1]){
                set = false;
            }
        }
        if(set){
            cnt++;
        }
    }
    cout<<cnt;
}