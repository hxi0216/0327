#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        for(int c=1;c<=4;c++){
        cin>>n;
        for(int i=0;i<4;i++){
            int temp=n;
            temp%=10;
            if(i%2==0) sum+=temp;
            else {
                sum+=temp*2%10;
                sum+=temp*2/10;
            }
            n/=10;
            }
        }
        if(sum%10!=0) cout<<"Invalid\n";
        else cout<<"Valid\n";
        
    }
    return 0;
}