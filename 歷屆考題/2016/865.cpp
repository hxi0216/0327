#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2,r;
        getline(cin,s1);
        getline(cin,s2);
        cout<<s2<<endl;
        cout<<s1<<endl;
        
        char mp[256]={0};
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]=s2[i];
        }

        while(getline(cin,r)&&r!=""){
            for(int i=0;i<r.size();i++){
                char txt =r[i];
                if(mp[txt]) cout<<mp[txt];
                else cout<<txt;
            }
            cout<<endl;
        }
        if(t) cout<<endl;
    }   
    return 0;
}