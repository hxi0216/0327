#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--){
        cout<<"Case #"<<cases++<<":"<<endl;
        string s,o;
        vector <string> c;
        while(getline(cin,s)&&s!=""){
            stringstream l(s);
            while(l>>o){
                c.push_back(o);
            }
            int need=1;
            string g="";
            for(int i=0;i<c.size();i++){
                if(c[i].size()>=need) { //c[i]的那一串自數量要大於需要的選取位置
                    g+=c[i][need-1];
                    need++;
                }
            }
            cout<<g<<endl;           
        }
        if(t!=0) cout<<endl; 
    }
    return 0;
}