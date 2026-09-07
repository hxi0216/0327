#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,cases=1;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int sum=0;
        for(int i=a;i<=b;i++){
            if(i%2==1) sum+=i;
        }
        cout<<"Case "<<cases++<<": "<<sum<<endl;
    }
    return 0;
}