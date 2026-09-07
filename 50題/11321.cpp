#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
while(cin>>n>>m){
    cout<<n<<" "<<m<<endl;
    if(n==0&&m==0) return 0;
    vector <int> c(n,0);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }

    sort(c.begin(),c.end(),[m](const auto&a,const auto&b){
        int q=a%m, h=b%m;
        int f=a%2,w=b%2;
        if(q==h){
            if(f==1&&w==1){
                return a>b;
            }
            else if(f==0&&w==0){
                return a<b;
            }
            else if(f==1){
                return a>b;
            }
            else{
                return a<b;
            }
        }
        else{
            return q<h;
        }
    });
    for(int i:c){
        cout<<i<<endl;
    }
}
return 0;
}