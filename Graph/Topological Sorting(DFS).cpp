// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	// adj[v].push_back(u);
	
}

void findtopo(int node, stack<int> &s, vector<int> adj[], vector<int> &vis){
	
	vis[node] = 1;
	for(auto x:adj[node]){
		if(!vis[x]){
			findtopo(x,s,adj,vis);
		}
	}
	s.push(node);
}

void TopoSort(vector<int> adj[],int V){
	
	vector<int> vis(V,0);
	stack<int> s;
	
	for(int i=0;i<V;i++){
		if(!vis[i]){
			findtopo(i,s,adj,vis);
		}
	}
	
	// print 
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	

}

int main(){
	
	int V = 6;
	vector<int> adj[V];
	addEdge(adj,2,3);
	addEdge(adj,3,1);
	addEdge(adj,4,0);
	addEdge(adj,4,1);
	addEdge(adj,5,0);
	addEdge(adj,5,2);

	TopoSort(adj,V);
	
	return 0;
}



// Output:

// 5 4 2 3 1 0 
