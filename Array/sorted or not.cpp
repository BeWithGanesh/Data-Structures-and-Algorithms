// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void check(int arr[],int n){
	
	for(int i=1;i<n;i++){
		if(arr[i] < arr[i-1]){
			cout<<"no";
			exit(0);
		}
	}
	cout<<"sorted";
}

int main(){
	
	int arr[]={1,2,3,4,5,8};
	int n = sizeof arr/ sizeof arr[0];
	check(arr,n);
	return 0;
}


// Output:

// sorted