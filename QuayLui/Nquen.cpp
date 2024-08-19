#include<bits/stdc++.h>
using namespace std;
int x[100],n,cot[100],d1[100],d2[100];
void ktao(){
	memset(cot,0,sizeof(cot));
	memset(d1,0,sizeof(d1));
	memset(d2,0,sizeof(d2));
}
void Try(int i){
	// dat con hau o hang thu i ban dau co n cot de lua chon
	for(int j=1;j<=n;j++){
		//truoc khi dat con hau o hang i vao cot x[i]=j
		if(cot[j]==0 && d1[i-j+n]==0 &&d2[i+j-1]==0){
			x[i]=j;
			cot[j]=1;
			d1[i-j+n]=1;
			d2[i+j-1]=1;
			if(i==n){
				for(int k=1;k<=n;k++){
					cout<<"con hau thu "<<k<<" nam o cot"<<x[k]<<endl;
				}
				cout<<endl;
			}
			Try(i+1);
			cot[j]=0;
			d1[i-j+n]=0;
			d2[i+j-1]=0;
		}
	}
}
int main(){
	ktao();
	cin>>n;
	Try(1);
}