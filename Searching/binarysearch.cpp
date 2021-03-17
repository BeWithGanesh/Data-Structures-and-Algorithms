#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
	
	if(l>r){
		return -1;
	}
	
	int mid = l+(r-l)/2; // (l+r)/2
	
	if(arr[mid] == x){
		return mid;
	}
	
	if(arr[mid]>x){
		return binarySearch(arr,l,mid-1,x);
	}
	else{
		return binarySearch(arr, mid+1, r, x);
	}
}

int main(){
	
	int arr[] = {1,4,6,7,12,19};
	int size = sizeof(arr)/sizeof(arr[0]);
	int x;
	
	cin>>x;
	
	int res = binarySearch(arr,0,size-1,x);
	
	if(res>0){
		cout<<1;
	}
	else{
		cout<<-1;
	}

	return 0;
}