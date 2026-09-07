#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
cin>>t;
while(t--){
    int r;
    cin>>r;
    vector <int> p(r,0);
    for(int i=0;i<r;i++){
        cin>>p[i];
    }
    int mn=p[0],mx=p[0];
    for(int i=0;i<p.size();i++){
        mx=max(mx,p[i]);
        mn=min(mn,p[i]);
    }
    cout<<(mx-mn)*2<<endl;
}
    return 0;
}