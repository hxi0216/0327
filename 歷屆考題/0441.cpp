#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n&&n){
        vector <int> num(n,0);
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        set <int> ans;
        for(int i=0;i<num.size();i++){
            if(ans.count(i)!=1){
                ans.insert(i);
            }
            if(ans.size()==6) {
                for(int i:ans) cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}