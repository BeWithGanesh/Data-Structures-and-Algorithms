// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<pair<int,int>> adj[],int u,int v,int wt){
	
	adj[u].push_back({v,wt});
	// adj[v].push_back(u);
	
}

void findTopoSort(int node, stack<int> &st, vector<pair<int,int>> adj[], int vis[]){
	
	vis[node] = 1;
	for(auto x:adj[node]){
		if(!vis[x.first]){
			findTopoSort(x.first,st,adj,vis);
		}
	}
	st.push(node);
}

void shortestPath(vector<pair<int,int>> adj[],int V, int S){
	
	int vis[V]={0};
	stack<int> st;
	
	for(int i=0;i<V;i++){
		if(!vis[i]){
			findTopoSort(i,st,adj,vis);
		}
	}
	
	int dist[V];
	for(int i=0;i<V;i++){
		dist[i] = INT_MAX;
	}
	
	dist[S] = 0;
	
	while(!st.empty()){
		
		int node = st.top();
		st.pop();
		
		if(dist[node] != INT_MAX){
			for(auto it:adj[node]){
				if(dist[node]+it.second < dist[it.first]){
					dist[it.first] = dist[node]+it.second; 
				}
			}
		}
	}
	
	// print
	for(int i=0;i<V;i++){
		cout<<"source:0->"<<i<<"->";
		if(dist[i] == INT_MAX){
			cout<<"INF"<<" ";
		}
		else{
			cout<<dist[i];
		}
		cout<<endl;
	}

}

int main(){
	
	int V = 6;
	vector<pair<int,int>> adj[V];
	addEdge(adj,0,1,1); // u , v , wt
	addEdge(adj,0,2,2);
	addEdge(adj,2,4,5);
	addEdge(adj,4,1,1);
	addEdge(adj,1,3,5);
	

	shortestPath(adj,V,0);
	
	return 0;
}



// Output:

// source:0->0->0
// source:0->1->1
// source:0->2->2
// source:0->3->6
// source:0->4->7
// source:0->5->INF 
// 
