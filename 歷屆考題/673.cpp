#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack <char> list;
        bool flag =true;
        for(int i=0;i<s.length();i++){
            cout<<s[i]<<endl;
        if(s[i]=='('||s[i]=='['){
            list.push(s[i]);
            continue;
        }        
        if(!list.empty()){
        if((s[i]==')'&&list.top()=='(')||(s[i]==']'&&list.top()=='[')){
            list.pop(); //match=clean
        }
        else {
            flag=false;
            break;
        }
        }
         else list.push(s[i]); //情況:()]
    }
    flag=list.empty();
        if(flag) cout<<"Yes\n";
        else cout<<"No\n";
    }
}