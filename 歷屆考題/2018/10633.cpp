#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,N,n,bn;
while(cin>>a){
    if(a==0) return 0;
    //M=a;
    /*N-M=9n+0~9;// ex:18
    a=9n+0~9;*/
    for(int i=9;i>=0;i--){
        bn=a-i;//9n=a-i
        if(bn%9==0){
            n=(bn/9)*10;//10n=9n*10/9
            N=n+i;//N=10n+i
            cout<<N<<" ";
        }    
    }
    cout<<endl;
}
return 0;
}