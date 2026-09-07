#include <bits/stdc++.h>
using namespace std;

int digits(int a){ //取數字餘數並相加
    int sum=0;
    while(a!=0){
        sum+=a%10;
        a/=10;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=max(1,n-100),ans=0;
        for(;i<=n;i++){
            if(n==i+digits(i)){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}