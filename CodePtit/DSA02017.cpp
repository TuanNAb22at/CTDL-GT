#include<bits/stdc++.h>
using namespace std;
int a[9][9],x[100],cot[100],d1[100],d2[100];
int kq;
void inp(){
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin>>a[i][j];
		}
	}
	memset(cot,0,sizeof(cot));
	memset(d1,0,sizeof(d1));
	memset(d2,0,sizeof(d2));
	
}

void Try(int i){
	for(int j=1;j<=8;j++){
		//truoc khi dat con hau o hang i vao cot x[i]=j
		if(cot[j]==0 && d1[i-j+8]==0 &&d2[i+j-1]==0){
			x[i]=j;
			cot[j]=1;
			d1[i-j+8]=1;
			d2[i+j-1]=1;
			if(i==8){
				int sum=0;
				for(int k=1;k<=8;k++){
					sum+=a[k][x[k]];
				}
				kq=max(kq,sum);
			}
			Try(i+1);
			cot[j]=0;
			d1[i-j+8]=0;
			d2[i+j-1]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		kq=0;
		Try(1);
		cout<<kq<<endl;
	}
	
}