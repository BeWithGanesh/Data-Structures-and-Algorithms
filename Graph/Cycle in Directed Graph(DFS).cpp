// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	// adj[v].push_back(u);
	
}

bool dfs(int s,vector<int> adj[],int vis[],int dfsvis[]){
	
	vis[s] = dfsvis[s] = 1;
	
	for(auto x:adj[s]){
		if(!vis[x] && dfs(x,adj,vis,dfsvis)){
			return true;
		}
		else if(dfsvis[x]){
			return true;
		}
	}
	dfsvis[s] = 0;
	return false;
}

bool Cycle(vector<int> adj[],int V){
	
	int vis[V],dfsvis[V];
	memset(vis,0,sizeof vis);
	memset(dfsvis,0,sizeof dfsvis);
	
	for(int i=0;i<V;i++){
		
		if(!vis[i]){
			if(dfs(i,adj,vis,dfsvis)){
				return true;
			}
		}	
	}
	return false;
}

int main(){
	
	int V = 5;
	vector<int> adj[V];
	addEdge(adj,0,1);
	addEdge(adj,1,2);
	addEdge(adj,2,0);

	cout<<Cycle(adj,V);
	
	return 0;
}



// Output:

// 1  
