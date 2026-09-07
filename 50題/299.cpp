#include <bits/stdc++.h>
using namespace std;
//車廂只能跟鄰近的換
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l(n,0);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        int sum=0;
        for(int i=0;i<l.size();i++){
            for(int j=i+1;j<n;j++){
                if(l[i]>l[j])sum++;
            }
        }
        cout<<"Optimal train swapping takes "<<sum<<" swaps."<<endl;
    }
    return 0;
}