// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;
#define r 5
#define c 5

void transpose(int arr[r][c]){ // changing row to column and vice versa
	
	for(int i=0;i<r;i++){
		for(int j=i+1;j<c;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
}

int main(){
	int arr[r][c]={
		{10,20,30,40,50},
		{5,4,3,2,1},
		{1,2,3,4,5},
		{5,4,3,2,1},
		{1,2,3,4,5}
	};
	
	transpose(arr);
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" " ;
		}
		cout<<endl;
	}
	
	return 0;
}


// Output:

// 10 5 1 5 1 
// 20 4 2 4 2 
// 30 3 3 3 3 
// 40 2 4 2 4 
// 50 1 5 1 5 
// 