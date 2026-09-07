#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    int n,i;
    double q,p,sum;
    cin>>t;
    while(t--){
        cin>>n>>p>>i;
        q=1-p;
        if(p==0){
            cout<<"0.0000\n";
        }
        else{
            sum=pow(q,i-1)*p/(1-pow(q,n));//pow(q,i-1)*p: 第 i 個人在某一輪成功。/(1-pow(q,n)): 因為可能整輪沒人成功，要一直重玩
            cout<<fixed<<setprecision(4)<<sum<<endl;
        }
    }
    return 0;
}