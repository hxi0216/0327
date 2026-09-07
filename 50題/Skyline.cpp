#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int hi[10000]={0},l,r,h;
    while(cin>>l>>h>>r){
        for(int i=l;i<r;i++){
            if(h>hi[i]){
                hi[i]=h;
            }
        }
    }
    for(int i=1;i<10000;i++){
            if(hi[i]!=hi[i-1]){
                cout<<i<<" "<<hi[i]<<" ";
            }
        }
    return 0;
}