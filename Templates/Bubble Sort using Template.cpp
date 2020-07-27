#include<bits/stdc++.h>
using namespace std;

template <typename T>
T bubble(T a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){
	char a[]={'g','a','n','e','s','h'};
	int b[]={5,3,1,4,2};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	
	//char
	cout<<"Before Sorting..";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	bubble(a,n);
	
	cout<<"After Sorting..";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;
	
	//int
	cout<<"Before Sorting..";
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	
	cout<<endl;
	bubble(b,m);
	
	cout<<"After Sorting..";
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	
	return 0;
}


/*
Output:

Before Sorting..g a n e s h
After Sorting..a e g h n s

Before Sorting..5 3 1 4 2
After Sorting..1 2 3 4 5

*/
