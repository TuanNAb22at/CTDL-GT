#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *left;
	node *right;	
};

node* makeNode(int x){
	node *tmp=new node;
	tmp->data=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void makeRoot(node *root,int u,int v,char c){
	if(c=='L') root->left=makeNode(v);
	else root->right=makeNode(v);
}

node* insertNode(node *root,int key){
	if(root==NULL){
		return makeNode(key);
	}
	if(key<root->data){
		root->left=insertNode(root->left,key);
	}
	else if(key>root->data){
		root->right=insertNode(root->right,key);
	}
	return root;
	
}
void preOder(node *root){
	if(root==NULL) return;
	preOder(root->left);
	preOder(root->right);
	cout<<root->data<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    node *root=NULL;
	    for(int i=0;i<n;i++){
	    	int u;cin>>u;
	    	insertNode(root,u);
		}
		preOder(root);
		cout<<endl;
	}
}