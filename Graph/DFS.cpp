// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void dfs(int node,vector<int> &vis,vector<int> adj[]){
	
	cout<<node<<" ";
	vis[node] = 1;
	
	for(auto x:adj[node]){
		
		if(!vis[x])
			dfs(x,vis,adj);
	}
	
}

void DFS(vector<int> adj[],int V){
	
	vector<int> vis(V,0); // to track visited nodes
	
	for(int i=0;i<V;i++){
		if(!vis[i]){
			
			dfs(i,vis,adj);
		}
	}
}

int main(){
	
	int V = 5;
	vector<int> adj[V];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,0,4);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
	addEdge(adj,2,4);
	


	DFS(adj,V);
	
	return 0;
}



// Output:

// 0 1 2 3 4  
