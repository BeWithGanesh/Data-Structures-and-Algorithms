// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

bool findSubarray(int arr[],int n){
	
	int prefix_sum = 0;
	unordered_set<int> us;
	
	for(int i=0;i<n;i++){
		prefix_sum += arr[i];
		if(us.find(prefix_sum) != us.end())
			return true;
		us.insert(prefix_sum);
		
	}
	return false;
	
}

int main(){
	
	int arr[] = {5,6,-4,-2,8,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(findSubarray(arr,n)){
		cout<<"present";
	}
	else{
		cout<<"not";
	}
	
	return 0;
}


// output:

// present