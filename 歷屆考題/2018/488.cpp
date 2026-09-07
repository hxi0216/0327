#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    int a,f;
    cin>>a>>f;
    for(int k=1;k<=f;k++){ //印幾次的頻率
        for(int i=1;i<=a;i++){//由小印到大
                for(int j=1;j<=i;j++){
                    cout<<i;
                }        
            cout<<endl;
            }

        for(int i=a-1;i>=1;i--){//大到小
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
        if(k!=f) cout<<endl;
    }
    if(t)cout<<endl;
    }
    return 0;
}