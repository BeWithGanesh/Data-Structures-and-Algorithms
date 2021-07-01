// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void fun(int arr[], int n){
	
	int l = 0;
	int r = n-1;
	
	while(l<r){
		swap(arr[l],arr[r]);
		l++;
		r--;
	}
	
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={1,2,3,4,5,8};
	int n = sizeof arr/ sizeof arr[0];
	fun(arr,n);
	return 0;
}

// Output:

// 8 5 4 3 2 1 
