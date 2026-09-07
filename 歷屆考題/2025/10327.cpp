#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t){
        vector<int> l(t,0);
        for(int i=0;i<t;i++){
            cin>>l[i];
        }
        int sum=0;
        for(int i=0;i<l.size();i++){
            for(int j=i;j<l.size();j++){
                 if(l[i]>l[j]) sum++;
            }
        }
        cout<<"Minimum exchange operations : "<<sum<<endl;
    }
    return 0;
}