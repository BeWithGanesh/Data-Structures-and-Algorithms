// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void printAdjacent(vector<int> adj[],int V){
	
	for(int i=0;i<V;i++){
		cout<<i;
		for(auto x:adj[i]){
			cout<<"->"<<x;
		}
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

	printAdjacent(adj,V);
	
	return 0;
}



// Output:

// 0->1->2->4
// 1->0->2->3
// 2->0->1->3
// 3->1->2
// 4->0
// 
