// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void BFS(vector<int> adj[],int V){
	
	vector<int> vis(V,0); // to track visited nodes
	
	for(int i=0;i<V;i++){
		if(vis[i]==0){
			
			queue<int> q;
			q.push(i);
			vis[i] = 1; // mark it visited
			
			while(!q.empty()){
				
				int x = q.front();
				q.pop();
				cout<<x<<" ";
				
				for(auto u:adj[x]){
					
					if(vis[u]==0){
						q.push(u);
						vis[u] =1; // mark it visited
					}
				}
			}
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

	BFS(adj,V);
	
	return 0;
}



// Output:

// 0 1 2 4 3  
