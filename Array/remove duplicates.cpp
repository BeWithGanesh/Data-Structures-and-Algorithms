// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int n){
	
	int res = 1;
	for(int i=1;i<n;i++){
		if(arr[i] != arr[res-1]){
			arr[res] = arr[i];
			res++;
		}
	}
	cout<<res;
	
}

int main(){
	
	int arr[]={1,2,2,4,4,8};
	int n = sizeof arr/ sizeof arr[0];
	fun(arr,n);
	
	return 0;
}


// Output:

// 4