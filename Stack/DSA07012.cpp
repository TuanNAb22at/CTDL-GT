#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(int i=0;i<s.size();i++){
			if(s[i]>='A' && s[i] <='Z'){
				st.push(string(1,s[i]));
			}
			else{
				string res="";
				string o1=st.top(); st.pop();
				string o2=st.top(); st.pop();
				res="("+o2+s[i]+o1+")";
				st.push(res);
			}
		}
		cout<<st.top()<<endl;
	}
}