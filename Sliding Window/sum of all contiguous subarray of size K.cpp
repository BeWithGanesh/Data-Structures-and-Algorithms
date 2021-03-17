#include<bits/stdc++.h>
using namespace std;

void subSum(int arr[], int n, int k){
	
	int wstart = 0;
	int subsum = 0;
	
	for(int i=0;i<n;i++){
		
		subsum += arr[i];
		
		if(i>= k-1){
			cout<<subsum<<" ";
			subsum -= arr[wstart];
			wstart++; 
		}
	}
	
	
}

int main(){
	
	int arr[] = { 1, 5, -1, 6, 3, 2 };
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    subSum(arr, n, k);
 
	return 0;
}