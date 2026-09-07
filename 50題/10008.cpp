#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string ch;
    vector<pair<char, int>> mp(26, {0, 0}); 

    cin.ignore();

    for(int i=0;i<t;i++){
        getline(cin,ch); 
        for(char& i:ch){
            if(isalpha(i)){//判斷是否為字母
            i=toupper(i);
            mp[i-'A'].first = i;
            mp[i-'A'].second++;
            }
        }
    }
    sort(mp.begin(),mp.end(),[](const pair<char, int>&a,const pair<char, int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
            return a.second>b.second;
        
    });
    for(auto& i:mp){
        if (i.second > 0)
            cout<<i.first<<" "<<i.second<<endl;
    }
}