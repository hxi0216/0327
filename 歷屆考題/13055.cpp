#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
     stack <string> now;
    while(t--){
        string s;
        getline(cin,s); //讀整行
        stringstream word(s);
        string name,cmd;//cmd=取第一個字 name=取名字
        while(word>>cmd){
            if(cmd=="Sleep"){//取name
                word>>name;
                now.push(name);
            }
            if(!now.empty()){
                if(cmd=="Test"){
                cout<<now.top()<<endl;
                }
                else if(cmd=="Kick"){
                now.pop();
                }
            }
            else if(now.empty()&&!(cmd=="Kick")){
                cout<<"Not in a dream\n";
            }
    }
}
    return 0;
}