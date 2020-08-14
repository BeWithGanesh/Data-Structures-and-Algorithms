#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int info;
    Node *left = NULL;
    Node *right = NULL;
    int hd; 			// horizontal distance
};

Node *root = NULL;

Node *newNode(int data) {
    Node *temp = new Node;
    temp->info = data;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}


void verticalView(Node *node) {
	
	//base
    if (node == NULL)
        return;

    queue<Node *> q;
    map<int, vector<int> > m;
    q.push(node);
    
    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();
        int hd = temp->hd;

        m[hd].push_back(temp->info); // appends the value to map

        if (temp->left) {
            temp->left->hd = hd - 1;
            q.push(temp->left);
        }

        if (temp->right) {
            temp->right->hd = hd + 1;
            q.push(temp->right);
        }

    }
    
    map<int, vector<int> >::iterator itr;
    for (itr= m.begin(); itr != m.end(); itr++){
	
        for (int i = 0; i < itr->second.size(); i++) {
            cout << itr->second[i] << " ";
        } cout << endl;
    }
}

int main() {

    root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
	root->left->left->right = newNode(7);
   
    cout<<"Vertical View : \n";
    verticalView(root);
	cout << endl;
	 
    return 0;
}

/* Output:

Vertical View :
6
4
2 7
1 5
3

*/
