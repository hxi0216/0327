#include<bits/stdc++.h>
using namespace std;

int main(){
    int g;
    string s;
    while(cin>>g&&g!=0){
        cin.ignore();
        getline(cin,s);
        int total=0;
        total=s.length()/g;
        for(int i=0;i<s.length();i+=total){
            string p=s.substr(i,total);
            reverse(p.begin(),p.end());
            cout<<p;
        }
        cout<<endl;
    }
    return 0;
}
