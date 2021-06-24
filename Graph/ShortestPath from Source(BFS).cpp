// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void shortestPath(vector<int> adj[],int V,int S){
	
	int dist[V];
	for(int i=0;i<V;i++){
		dist[i] = INT_MAX;
	}
	
	queue<int> q;
	dist[S]=0;
	q.push(S);
	
	while(!q.empty()){
		
		int node = q.front();
		q.pop();
		
		for(int x:adj[node]){
			if(dist[node]+1 < dist[x]){
				dist[x] = dist[node]+1;
				q.push(x);
			}
		}
	}
	
	for(int i=0;i<V;i++){
		cout<<"source:0->"<<i<<"->"<<dist[i];
		cout<<endl;
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

	// function
	shortestPath(adj,V,0);
	
	return 0;
}



// Output:

// source:0->0->0
// source:0->1->1
// source:0->2->1
// source:0->3->2
// source:0->4->1
// 
//  
