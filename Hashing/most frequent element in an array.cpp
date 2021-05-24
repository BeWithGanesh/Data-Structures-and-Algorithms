// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void maxFrequency(int arr[],int n){
	
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		map[arr[i]]++;
	}
	
	int count = 0,res = -1;
	for(auto i:map){
		if(count<i.second){
			res = i.first;
			count = i.second;
		}
		
	}
	
	cout<<res;
}

int main(){
	
	int arr[] = {1,1,2,4,5,6,3,2,7,1,8,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	maxFrequency(arr,n);
	
	return 0;
}

// output:

// 1
// 
