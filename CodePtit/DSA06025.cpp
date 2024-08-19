#include <iostream>
#include <vector>
using namespace std;
void insertionSort(int a[],int n) {
    for (int i = 1; i <= n; i++) {
    	int x=a[i],pos=i-1;
       	while(pos>=1 && a[pos]>x){
       		a[pos+1]=a[pos];
       		--pos;
	   }
	   	a[pos+1]=x;
	   	cout<<"Buoc "<<i-1<<": ";
	   	for(int j=1;j<=i;j++){
	   		cout<<a[j]<<" ";
	   	}
	   	cout<<endl;
    }
}


int main() {
   	int n;
   	cin>>n;
   	int a[n+1];
   	for(int i=1;i<=n;i++) cin>>a[i];
   	insertionSort(a,n);
    return 0;
}
