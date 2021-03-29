// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n){
	
	
	//corner case
	if(n==0 || n==1)
		return;
	
	int j=0;
	int res[n];
	
	for(int i=0;i<n-1;i++){
		if(arr[i] != arr[i+1]){
			res[j++] = arr[i];
		}
	}
	
	res[j++] = arr[n-1];
	
		//print array
		for(int i=0;i<j;i++){
			cout<<res[i]<<" ";
		}
	
	
}



int main(){
	
	
	int t;
	cin>>t;
	
	while(t--){
		
		int n;
		cin>>n;
		int arr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		
		removeDuplicates(arr,n);
		
		
		
		
	}
	
	return 0;
}