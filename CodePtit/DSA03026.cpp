#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	t=1;
	while(t--){
		int s,d;
		int n,k;cin>>n>>k;
		s=k;d=n;
		vector<int> v;
		if(s>d*9 || s==0){
			cout<<-1<<" "<<-1;
		}
		else{
			int cnt=0;
			int m=s;
			vector<int> v1;
			while(m){
				if(m>=9){
					v1.push_back(9);
					m-=9;
				}
				else{
					v1.push_back(m);
					m=0;
				}
				cnt++;
			}
		
			for(int i=cnt;i<d;i++){
				v1.push_back(0);
			}
			s-=1;
			int dem=0;
			while(s>0){
				if(s>=9){
					v.push_back(9);
					s-=9;
				}
				else{
					v.push_back(s);
					s=0;
				}
				dem++;
			}
			if(dem==d){
				v[v.size()-1]+=1;
			}
			else{
				for(int i=dem;i<d-1;i++){
					v.push_back(0);
				}
				v.push_back(1);
			}
			reverse(begin(v),end(v));
			for(int x:v) cout<<x;
			cout<<" ";
			for(int x:v1){
				cout<<x;
			}
		}
		cout<<endl;
	}
}