// Coded by Ganesh Prasad


/* 	

Kahn’s algorithm for Topological Sorting reverse logic is used here

*/

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	// adj[v].push_back(u);
	
}


bool Cycle(vector<int> adj[],int V){
	
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
	
	int cnt=0;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		cnt++;
		
		for(auto x:adj[node]){
			indegree[x]--;
			if(indegree[x]==0){
				q.push(x);
			}
		}
	}
	
	if(cnt == V) return false;
	
	return true;

}

int main(){
	
	int V = 6;
	vector<int> adj[V];
	addEdge(adj,0,1);
	addEdge(adj,1,2);
	addEdge(adj,2,0);

	cout<<Cycle(adj,V);
	
	return 0;
}



// Output:

// 1
