#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
    cin>>t;
    while(t--){
        string n1,n2;
        int n;
        cin>>n1>>n2>>n;
        vector<long long int> sq(n*n,0);
        bool flag=true;//每筆都要重新算所以放裡面
        for(int i=0;i<n*n;i++){
                cin>>sq[i];
                if(sq[i]<0) flag=false;
        }

        for(int i=0;i<sq.size()&&flag;i++){
            if(sq[i]!=sq[sq.size()-1-i]){//看是否對稱第 i 個元素是否等於倒數第 i 個元素
            flag=false;
            }
        }

        if(flag==true) cout<<"Test #"<<cases++<<": Symmetric.\n";
        else cout<<"Test #"<<cases++<<": Non-symmetric.\n"; 
    }
    return 0;
}