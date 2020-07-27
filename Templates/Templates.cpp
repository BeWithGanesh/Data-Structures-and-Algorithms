#include<bits/stdc++.h>
using namespace std;

template <typename T>
T Max(T x, T y){
	return(x>y) ? x : y;
}

int main(){
	
	cout<<Max<int> (3,7)<<endl;
	
	cout<<Max<double> (9.1,9.0)<<endl;
	
	cout<<Max<char> ('a','A');
	
	return 0;
}

/*
Output:

7
9.1
a

*/
