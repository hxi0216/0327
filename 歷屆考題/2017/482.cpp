#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        cin.ignore();
        int a;
        string s1,s2,b;
        getline(cin,s1);
        getline(cin,s2);
        stringstream p1(s1); //stringstream把字串當作輸入輸出
        stringstream p2(s2);
        vector <pair<int,string>> d;
        while(p1>>a&&p2>>b){ //p1 >> a //>>=cin    -> stream      
            d.push_back({a,b});
        }
        
       sort(d.begin(),d.end(),[](const pair<int,string>&a,const pair<int,string>&b){
            return a.first<b.first;
       });
       for(pair<int ,string> i:d){
        cout<<i.second<<endl;
       }
       if(t!=0) cout<<endl;
    }
    return 0;
}