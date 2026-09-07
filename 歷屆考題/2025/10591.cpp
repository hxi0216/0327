#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,cases=1;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<"Case #"<<cases++<<": "<<n;
        int sum=0;
        set <int> check;
        bool flag=true;//都沒重複出現
        while(n!=1){
           sum=0;
            if(check.count(n)==1) {//出現過->跳出
                flag=false;
                break;
            }
            check.insert(n);//沒出現過把新的n存進去
            while(n>0){
                sum+=pow(n%10,2);
                n/=10;   
            }
            n=sum;
        }  
        if(flag) cout<<" is a Happy number.\n";
        else cout<<" is an Unhappy number.\n";
    }
    return 0;
}