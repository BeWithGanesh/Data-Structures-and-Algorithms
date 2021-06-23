// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

bool chkCycle(int s, int prev, vector<int> adj[], vector<int> &vis){
	
	vis[s] = 1;
	for(auto it : adj[s]){
		if(vis[it] == 0){
			if(chkCycle(it,s,adj,vis)){
				return true;
			}
			else if(it != prev){
				return true;
			}
		}
	}
	return false;
}

bool Cycle(vector<int> adj[], int V){
	
	vector<int> vis(V,0);
	
	for(int i=0;i<V;i++){
		if(vis[i] == 0){
			if(chkCycle(i,-1,adj,vis)){
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
	addEdge(adj,0,2);
	addEdge(adj,0,4);
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
	addEdge(adj,2,4);

	cout<<Cycle(adj,V);
	
	return 0;
}



// Output:

// 1  
