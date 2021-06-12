// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;
char a[1000];
vector<int> v;

void stringtoint(){
	char *ans = strtok(a," ");
	while(ans!=NULL){
		v.push_back(stoi(ans));
		ans = strtok(NULL," ");
	}
}

class Node{
	public:
		int data;
		Node* left, *right;
		
		Node(int x){
			data = x;
			left = right = NULL;
		}
};

Node* createTree(){
	
	// base 
	if(v.size() == 0){
		return NULL;
	}
	
	int no = v[0];
	Node *root = new Node(no);
	int i = 1;
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty() && i<v.size()){
		Node *temp = q.front();
		q.pop();
		
		//left
		no = v[i++];
		temp->left = new Node(no);
		q.push(temp->left);
		if(i>=v.size()){
			break;
		}
		
		// right
		no = v[i++];
		temp->right = new Node(no);
		q.push(temp->right);
		if(i>=v.size()){
			break;
		}
	}
	
	return root;
	
}

// void inorder(Node *root){
// 	
	// // base
	// if(root == NULL) return;
// 	
	// inorder(root->left);
	// cout<<root->data << " ";
	// inorder(root->right);
// }
// 

int Sum(Node *root){
	
	// base
	if(root == NULL) return 0;
	
	int left = Sum(root->left);
	int right = Sum(root->right);
	
	return root->data+left+right;
}


int subtrees(Node *root,int x){
	
	// base
	if(root == NULL) return 0;
	int ans = 0;
	if(Sum(root) == x){
		ans = 1;
	}
	
	int leftree = subtrees(root->left,x);
	int rightree = subtrees(root->right,x);
	
	return ans+leftree+rightree;
	
}




int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		
		cin.ignore();
		cin.getline(a,1000);
		
		int x;
		cin>>x;
		
		stringtoint();
		Node *root = createTree();
		
		// inorder(root);
		
		cout<<subtrees(root,x);
		
		
	}
	return 0;
}


// Input
// 
// 1
// 10 10 10
// 30

// Output
// 1