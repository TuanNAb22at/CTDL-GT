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

int check;
set<int> se;
void inorder(node *root,int cnt){
	if(root==NULL) return;
	if(root->left==NULL && root->right!=NULL ||root->left!=NULL && root->right==NULL){
		check=0;
	}
	if(root->left==NULL && root->right==NULL){
		se.insert(cnt);
	}
	inorder(root->left,cnt+1);
	inorder(root->right,cnt+1);
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		check=1;
		se.clear();
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
		inorder(root,0);
		if(check==1 && se.size()==1){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
		cout<<endl;
	}
}