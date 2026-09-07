#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
while(cin>>l>>n){
    map <string ,string> mp;
    for(int i=0;i<l;i++){
        string a,b;
        cin>>a>>b;
        mp[a]=b;
    }

        if(mp.back()=="y"){
            mp.replace(last)="ies";
        }
        else if(mp.back()=="y"){
            mp.replace(mp.back(),"ies");
        }
        else if(mp.back()=="o","s","ch","sh","x","es"){
            mp.replace(mp.back(),"es");
        }
        else{
            mp.replace(mp.back(),"s");
        }
    }
}