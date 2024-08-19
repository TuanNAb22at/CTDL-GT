#include<bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node *left;
	node *right;	
};
struct cay{
	int root,key;
	char c;
};
node* makeNode(int x){
	node *tmp=new node;
	tmp->data=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void makeRoot(node* root,int u,int v,char c){
	if(c=='L') root->left=makeNode(v);
	else root->right=makeNode(v);
}
void insertNode(node* root,int u,int v,char c){
	if(root==NULL) return;
	if(root->data==u){
		makeRoot(root,u,v,c);
	}
	else{
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}
void preorder(node *root){
	if(root==NULL){
		return;
	}
	preorder(root->left);
	cout<<root->data<<" ";
	preorder(root->right);
}
cay x[10001];
int main(){
	int t;
	cin>>t;
	while(t--){
		node* root=NULL;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(2*i+1<n){
				x[dem].root=a[i];
				x[dem].key=a[2*i+1];
				x[dem].c='L';
				dem++;
			}
			if(2*i+2<n){
				x[dem].root=a[i];
				x[dem].key=a[2*i+2];
				x[dem].c='R';
				dem++;
			}
		}
		for(int i=0;i<dem;i++){
			int u,v;char c;
			u=x[i].root;
			v=x[i].key;
			c=x[i].c;
			if(root==NULL){
				root=makeNode(u);
				insertNode(root,u,v,c);
			}
			else{
				insertNode(root,u,v,c);
			}
			
		}
		preorder(root);
		cout<<endl;
	}
}