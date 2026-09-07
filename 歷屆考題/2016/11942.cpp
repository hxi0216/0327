#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cout<<"Lumberjacks:\n";
    while(t--){
        vector <int> f(10,0);
        for(int i=0;i<10;i++){
            cin>>f[i];
        }
        bool inc=true,dec=true;
        for(int i=0;i<9;i++){
            if(f[i]>f[i+1])inc=false;
            else if(f[i]<f[i+1])dec=false;
        }
        if(inc||dec) cout<<"Ordered\n";
        else cout<<"Unordered\n";
    }
    return 0;
}