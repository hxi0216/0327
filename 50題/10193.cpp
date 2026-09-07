#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,p=1;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2;
        int g1,g2;
        getline(cin,s1);
        getline(cin,s2);
        g1=stoi(s1,nullptr,2);//string轉int
        g2=stoi(s2,nullptr,2);
          
        /*while(g1!=g2){//輾轉相除法
            if(g1>g2){
                g1-=g2;
            }
            else if(g1<g2){
                g2-=g1;
            }
        }*/
    while(g2!=0){
        int t=g1%g2;
        g1=g2;
        g2=t;
    }
    if(g1+g2==1)cout<<"Pair #"<<p++<<": Love is not all you need!\n";
    else cout<<"Pair #"<<p++<<": All you need is love!\n";
       // if(g1!=1) cout<<"Pair #"<<p++<<": All you need is love!\n";
        //else cout<<"Pair #"<<p++<<": Love is not all you need!\n";//g1==1
    }
    return 0;
}