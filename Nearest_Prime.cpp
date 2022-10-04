#include<bits/stdc++.h>
using namespace std;
#define N 1000000
vector<bool> primes(N, true);
void fun()
{
    primes[0]=primes[1]=false;
	for(int i=2 ; i*i < N ; i++){
		if(primes[i]==true){
			for(int j=i*i ; j <= N ; j+= i){
				primes[j]=false;
			}
		}
	}
}
int main()
{
    long n;
    cin>>n;
    fun();
    while(n--)
    {
        long a;
        cin>>a;
        long l=a, r=a;
        while(true){
            if(primes[l]){
                cout<<l<<endl;
                break;
            }
            else if(primes[r]){
                cout<<r<<endl;
                break;
            }
            l--;
            r++;
        }
    }
}