// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
	
};

Node *newNode(int x){
	
	Node *temp = new Node();
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}

Node* insertNode(Node *root,int data){
	
	// base
	if(root == NULL){
		root = newNode(data);
		return root;
	}
	
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty()){
		
		Node *temp = q.front();
		q.pop();
		
		if(temp->left != NULL){
			q.push(temp->left);
		}
		else{
			temp->left = newNode(data);
			return root;
		}
		
		if(temp->right != NULL){
			q.push(temp->right);
		}
		else{
			temp->right = newNode(data);
			return root;
		}
	}
	
	return root;
}

void inorder(Node *temp){
	
	stack<Node*> s;
    Node *curr = temp;
 
    while (curr != NULL || !s.empty())
    {
        
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
 
        curr = s.top();
        s.pop();
 
        cout << curr->data << " ";
 
        curr = curr->right;
        
    }

}

int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	
	inorder(root);
	
	return 0;
}



// Output:

// 4 2 1 3 
