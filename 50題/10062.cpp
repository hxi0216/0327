#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool flag=true;
    while(getline(cin,s)){
        if(!flag) cout<<endl;//換行每筆測資
        flag=false;
        vector <int> a(128,0);
        //相同字母加1
        for(char i:s){
            if(i>=32&&i<=128)
            a[i]++;
        }
        vector <pair<int ,int>> d;
        for(int i=0;i<128;i++){
            if(a[i]!=0){
                d.push_back({i,a[i]});
            }
        }
        /*sort(d.begin(),d.end(),[](const auto&a,const auto&b){*/
        sort(d.begin(),d.end(),[](const pair<int,int>& a, const pair<int,int>& b){
            if(a.second==b.second){
                return a.first>b.first;
            }
            else{
                return a.second<b.second;
            }
        });
        
        for(auto i:d){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
    return 0;
}