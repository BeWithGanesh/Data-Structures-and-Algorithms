// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<pair<int,int>> adj[],int u,int v,int wt){
	
	adj[u].push_back({v,wt});
	adj[v].push_back({u,wt});
	
}

void MST(int V, vector<pair<int,int>> adj[]){
	
	// util
	int min_edge[V];
	int parent[V];
	bool mst[V];
	
	// min-heap
	priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	
	// fill
	for(int i=0;i<V;i++){
		min_edge[i] = INT_MAX;
		parent[i] = -1;
		mst[i] = false;
	}
	
	
	min_edge[0]=0;
	pq.push({0,0});
	
	for(int i=0;i<V-1;i++){
		
		int u = pq.top().second;
		pq.pop();
		
		mst[u] = true;
		
		for(auto x:adj[u]){
			
			int v = x.first;
			int wt = x.second;
			
			if(mst[v] == false && min_edge[v]>wt){
				min_edge[v] = wt;
				parent[v] = u;
				pq.push({min_edge[v],v});
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

