#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        vector <int> jump(a,0);
        int h=0,l=0;
        for(int i=0;i<a;i++){
            cin>>jump[i];
        }
        for(int i=0;i<a-1;i++){
            if(jump[i]>jump[i+1]) l++;
            else if(jump[i]<jump[i+1]) h++;
        }
        cout<<"Case "<<cases++<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
