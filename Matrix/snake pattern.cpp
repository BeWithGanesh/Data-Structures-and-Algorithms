// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;
#define r 5
#define c 5

void printSnakePattern(int arr[r][c]){
	
	for(int i=0;i<r;i++){
		if(i%2 == 0){
			for(int j=0;j<c;j++){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
		else{
			for(int j=c-1;j>=0;j--){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
}

int main(){
	
	int arr[r][c]={
		{1,2,3,4,5},
		{5,4,3,2,1},
		{1,2,3,4,5},
		{5,4,3,2,1},
		{1,2,3,4,5}
	};
	
	printSnakePattern(arr);
	
	return 0;
}


// Output:

// 12345
// 12345
// 12345
// 12345
// 12345
