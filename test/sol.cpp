#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int r[500]={};
        int s;
        cin>>s;
        int mid;
        for(int i=0;i<s;i++){
            cin>>r[i];
        }
        sort(r,r+s);
        mid=r[s/2];
        int d=0;
        for(int i=0;i<s;i++){
            d+=abs(mid-r[i]);
        }
        cout<<d<<endl;
    }
    return 0;
}