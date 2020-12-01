// Coded by Ganesh Prasad

#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;


void SieveOfEratosthenes(int n){
	
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	
	for(int p=2; p*p<n; p++){
		if(prime[p] == true){
			for(int i=p*p; i<=n; i=i+p){
				prime[i] = false;
			}
		}
	}	
	
	// Print all the prime no's
	for(int i=2;i<n;i++){
		if(prime[i])
			cout<<i<<" ";
	}
	
}

// Driver code
int main(){
	fastio;
	int n;
	cout<<"Enter a value for n: "<<endl;
	cin>>n;
	
	SieveOfEratosthenes(n);
	
	return 0;
}