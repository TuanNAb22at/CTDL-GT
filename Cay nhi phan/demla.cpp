#include<bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node *left;
	node *right;	
};

node* makeNode(int x){
	node *tmp = new node;
	tmp->data=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void makeRoot(node *root,int u,int v,char c){
	if(c=='L') root->left=makeNode(v);
	else root->right=makeNode(v);
}

void insertNode(node *root,int u,int v,char c){
	if(root==NULL) return;
	if(root->data==u){
		makeRoot(root,u,v,c);
	}
	else{
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}

int demla(node *root){
	if(root==NULL) return 0;
	if(root->right==NULL){
		return 1;
	}
	int dem=0;
	dem+=demla(root->left);
	dem+=demla(root->right);
	return dem;
}
int main(){
	node *root=NULL;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int u,v;
		char c;
		cin>>u>>v>>c;
		if(root==NULL){
			root=makeNode(u);
			insertNode(root,u,v,c);
		}
		else{
			insertNode(root,u,v,c);
		}
	}
	cout<<demla(root);
}