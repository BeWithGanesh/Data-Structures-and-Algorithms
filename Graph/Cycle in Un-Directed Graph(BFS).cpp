// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

bool chkCycle(int s,int V, vector<int> adj[],vector<int> &vis){
	
	queue<pair<int,int>> q;
	q.push({s,-1});
	vis[s] = 1;
	
	while(!q.empty()){
		
		int node = q.front().first;
		int prev = q.front().second;
		q.pop();
		
		for(auto it:adj[node]){
			if(vis[it]==0){
				vis[it]=1;
				q.push({it,node});
			}
			else if(prev != it){
				return true;
			}
		}
	}
	
	return false;
}

bool Cycle(vector<int> adj[],int V){
	
	vector<int> vis(V,0); // to track visited elements
	
	for(int i=0;i<V;i++){
		
		if(vis[i] == 0){
			if(chkCycle(i,V,adj,vis)){
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
