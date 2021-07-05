#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
	    int n,d;
	    
	    cin>>n>>d;
	    
	    vector<int> v(n,0);
	    
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    
	    
	    //code
	    
	    reverse(v.begin(),v.begin()+d);
	    reverse(v.begin()+d,v.end());
	    reverse(v.begin(),v.end());
	  
		for(int i=0;i<n;i++){
	        cout<<v[i]<<" ";
	    }
}
	
	return 0;
}

// Input:
// 
// 1
// 5 2
// 1 2 3 4 5


// Output:

// 3 4 5 1 2 