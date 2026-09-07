#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;//目標天數
        cin>>n;
        int p=0,sum=0;//政黨數
        cin>>p;
        vector <int> h(p,0);//每個政黨每次加的天數
        for(int i=0;i<p;i++) cin>>h[i];
        set <int> d;
        for(int i=0;i<p;i++){
            for(int j=h[i];j<=n;j+=h[i]){
                if(j%7!=0&&j%7!=6){//星期五和六不算
                     d.insert(j);
                }
            }
        }
        sum+=d.size(); 
        cout<<sum<<endl;
    }
    return 0;
}