// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

// Trie Node
struct TrieNode{
	
	struct TrieNode *child[256];
	bool EOW; // End Of Word
	
};

struct TrieNode *getNode(){
	
	struct TrieNode *temp = new TrieNode;
	temp->EOW = false;
	
	for(int i=0;i<256;i++){
		temp->child[i]=NULL;
	}
	
	return temp;
}

void Insert(TrieNode *root,string key){
	
	struct TrieNode *curr = root;
	for(int i=0;i<key.length();i++){
		int index = key[i] - 'a';
		
		
		if(!curr->child[index]){
			curr->child[index] = getNode();
		}
		
		curr = curr->child[index];
	}
	
	curr->EOW = true;
}

bool Search(TrieNode *root, string key){
	
	struct TrieNode *temp = root;
	 
	for(int i=0;i<key.length();i++){
		int index = key[i] - 'a';
		
		if(!temp->child[index]){
			return false;
		}
		
		temp = temp->child[index];
	}
	
	return(temp != NULL && temp->EOW);
	
	
}

int main(){
	
	string keys[] = {"hi","hello","this","wat","what"};
	int n = sizeof(keys)/sizeof(keys[0]);
	
	struct TrieNode *root = getNode();
	
	for(int i=0;i<n;i++){
		Insert(root,keys[i]);
	}
	
	// search for keys
	Search(root,"hi") ? cout<<"yes\n" : cout<<"no\n";
	Search(root,"tis") ? cout<<"yes\n" : cout<<"no\n";
	
	return 0;
}




// Output:

// yes
// no
// 