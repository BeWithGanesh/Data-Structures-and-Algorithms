// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void maxDifference(int arr[],int n){
	
	int minVal = arr[0];
	int res = arr[1]-arr[0];
	
	for(int i=1;i<n;i++){
		res = max(res,(arr[i]-minVal));
		minVal = min(arr[i],minVal);
	}
	
	cout<<res;
	
}

int main(){
	
	int arr[]={10,2,13,4,7};
	int n = sizeof arr/ sizeof arr[0];
	maxDifference(arr,n);
	
	return 0;
}


// Output:

// 11