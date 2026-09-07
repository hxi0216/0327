#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> c(4,0);
        for(int i=0;i<c.size();i++){
            cin>>c[i];
        }
        sort(c.begin(),c.end());
        if(c[0]==c[3]){
            cout<<"square"<<endl;
        }
        else if(c[0]==c[1]&&c[2]==c[3]){
                cout<<"rectangle"<<endl;
        }
        else if((c[0]+c[1]+c[2])>c[3]){
                cout<<"quadrangle"<<endl;
        }
        else{
                cout<<"banana"<<endl;
        }
    }
    return 0;
}