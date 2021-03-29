// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int k){
	
	for(int i=0;i<k;i++){
	
		int tmp = arr[0];
		
		for(int i=0;i<n-1;i++){
			arr[i] = arr[i+1];
		}
		
		arr[n-1] = tmp;
	}
	
	
}

int main(){
	
	
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		
		int arr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		
		rotate(arr,n,k);
		
		
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
	
	return 0;
}