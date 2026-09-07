#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a;
    while(cin>>a){
        if(a==0) return 0;
        bitset<32> b(a);
        bool flag=true; //判斷碰到第1個1開始輸出
        cout<<"The parity of ";
        for(int i=31;i>=0;i--){
            if(b[i]==1) flag=false;
            if (!flag) cout<<b[i];
        }
        cout<<" is "<<b.count()<<" (mod 2).\n";
    }
    return 0;
}