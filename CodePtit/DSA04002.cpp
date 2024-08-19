#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int powmod(ll a, ll b)
{
	if(b==1LL) return(a%1000000007);
	ll d = powmod(a, b/2);
	if(b%2==0) return((d*d)%1000000007); else return((((d*d)%1000000007)*a)%1000000007);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a;cin>>a;
		ll x=a;
		ll y=0;
		while(a){
			y=y*10+a%10;
			a/=10;
		}
		cout<<powmod(x,y);
		cout<<endl;
	}

}