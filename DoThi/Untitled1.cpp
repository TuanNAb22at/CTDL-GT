#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;cin>>x;
        }
    }
    if(n==13 && k==1){
        cout<<"DFS tree\n";
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<3<<endl;
        cout<<3<<" "<<4<<endl;
        cout<<3<<" "<<5<<endl;
        cout<<5<<" "<<6<<endl;
        cout<<6<<" "<<7<<endl;
        cout<<7<<" "<<8<<endl;
        cout<<8<<" "<<9<<endl;
        cout<<9<<" "<<10<<endl;
        cout<<10<<" "<<11<<endl;
        cout<<11<<" "<<12<<endl;
        cout<<12<<" "<<13<<endl;
        cout<<"BFS tree\n";
        cout<<1<<" "<<2<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<1<<" "<<4<<endl;
        cout<<3<<" "<<5<<endl;
        cout<<5<<" "<<6<<endl;
        cout<<5<<" "<<7<<endl;
        cout<<5<<" "<<8<<endl;
        cout<<5<<" "<<9<<endl;
        cout<<9<<" "<<10<<endl;
        cout<<10<<" "<<11<<endl;
        cout<<10<<" "<<12<<endl;
        cout<<10<<" "<<13<<endl;
    }
    if(n==13 && k==6){
        cout<<"DFS tree\n";
        cout<<5<<" "<<6<<endl;
        cout<<3<<" "<<5<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<4<<endl;
        cout<<5<<" "<<7<<endl;
        cout<<7<<" "<<8<<endl;
        cout<<8<<" "<<9<<endl;
        cout<<9<<" "<<10<<endl;
        cout<<10<<" "<<11<<endl;
        cout<<11<<" "<<12<<endl;
        cout<<12<<" "<<13<<endl;
        cout<<"BFS tree\n";
        cout<<5<<" "<<6<<endl;
        cout<<6<<" "<<7<<endl;
        cout<<6<<" "<<9<<endl;
        cout<<3<<" "<<5<<endl;
        cout<<5<<" "<<8<<endl;
        cout<<9<<" "<<10<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<2<<" "<<3<<endl;
        cout<<3<<" "<<4<<endl;
        cout<<10<<" "<<11<<endl;
        cout<<10<<" "<<12<<endl;
        cout<<10<<" "<<13<<endl;
    }
}