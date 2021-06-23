// Coded by Ganesh Prasad


/* 	Kahn’s algorithm for Topological Sorting

Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge uv, vertex u comes before v in the ordering. Topological Sorting for a graph is not possible if the graph is not a DAG.

*/

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	// adj[v].push_back(u);
	
}


void TopoSort(vector<int> adj[],int V){
	
	vector<int> indegree(V,0);
	queue<int> q;
	
	// calc indegree
	
	for(int i=0;i<V;i++){
		for(auto x:adj[i]){
			indegree[x]++;
		}
	}
	
	// start with indegree == 0
	
	for(int i=0;i<V;i++){
		if(indegree[i] == 0){
			q.push(i);
		}
	}
	
	
	while(!q.empty()){
		int node = q.front();
		q.pop();
		cout<<node<<" ";
		
		for(auto x:adj[node]){
			indegree[x]--;
			if(indegree[x]==0){
				q.push(x);
			}
		}
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

// 4 5 0 2 3 1 
