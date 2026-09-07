#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
    while(cin>>t){
    cin.ignore();
    int sum=0;
    while(t--){
        string s;
        getline(cin,s);
        map <char ,int> mp;
        for(int i=0;i<s.length();i++){//相同++
            mp[s[i]]++;
        }
        
        bool cool=true;
        if(mp.size()<2){cool=false;}
        vector <int> f;
        for(auto x:mp){
            f.push_back(x.second);
        }
        sort(f.begin(),f.end());
        for(int i=0;i<f.size()-1;i++){
            if(f[i]==f[i+1]){
                cool=false;
            }
        }
        if(cool) sum++;
        }
        cout<<"Case "<<cases++<<": "<<sum<<endl;
    }
    return 0;
}
/*[](const map<string,int>&a, const map<string,int>&b){
        if(a.second>b.second){
            cool=true;
            sum++;
        }
        else if(a.second==b.second){

        }
    }*/