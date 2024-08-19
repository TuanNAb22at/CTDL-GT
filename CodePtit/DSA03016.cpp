#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int s,d;cin>>s>>d;
		vector<int> v;
		if(s>d*9){
			cout<<-1;
		}
		else{
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
		}
		cout<<endl;
	}
}