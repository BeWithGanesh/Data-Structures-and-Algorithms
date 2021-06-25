// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<pair<int,int>> adj[],int u,int v,int wt){
	
	adj[u].push_back({v,wt});
	adj[v].push_back({u,wt});
	
}

void MST(int V, vector<pair<int,int>> adj[]){
	
	int min_edge[V];
	int parent[V];
	bool mst[V];
	
	for(int i=0;i<V;i++){
		min_edge[i] = INT_MAX;
		parent[i] = -1;
		mst[i] = false;
	}
	
	min_edge[0]=0;
	
	for(int i=0;i<V;i++){
		
		int mini = INT_MAX, u;
		
		for(int v=0;v<V;v++){
			if(mst[v] == false && min_edge[v]<mini){
				mini = min_edge[v];
				u = v;
			}
		}
		
		mst[u] = true;
		
		for(auto it:adj[u]){
			
			int v = it.first;
			int wt = it.second;
			
			if(mst[v] == false && min_edge[v] > wt){
				min_edge[v] = wt;
				parent[v] = u;
			}
		}		
	}
	
	for(int i=0;i<V;i++){
		cout<<parent[i]<<"->"<<i<<"->"<<min_edge[i]<<"\n";
	}
}



int main(){
	
	int V = 5;
	vector<pair<int,int>> adj[V];
	addEdge(adj,0,1,1); // u , v , wt
	addEdge(adj,0,3,6);
	addEdge(adj,3,1,8);
	addEdge(adj,1,2,3);
	addEdge(adj,1,4,5);
	addEdge(adj,2,4,7);
	

	// function
	MST(V,adj);
	
	return 0;
}



// Output:

// -1->0->0
// 0->1->1
// 1->2->3
// 0->3->6
// 1->4->5
// 

