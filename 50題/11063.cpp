#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
    while(cin>>t){
        vector <int> b(10000,0); 
        bool flag=true;
        //vector <int> a; 
        unordered_set <int> p;
        int sum=0;
        string clean;
        for(int i=0;i<t&&flag;i++){
            cin>>b[i];
            if(b[i]<1||(b[i]<=b[i-1]&&i>0)) {
                flag=false;
                getline(cin,clean);
            }
            for(int j=0;j<=i&&flag;j++){
                sum=b[i]+b[j];
                //p
                if(!p.count(sum)) {
                    p.insert(sum);
                }
                else {
                    flag=false;
                    getline(cin,clean);
                }
                //=if(!p.insert(sum).second) break;
            }
        }
        /*string d;
        if(!flag) getline(cin,d);
        //sort(a.begin(),a.end());//用p就不用這段
        for(int s=0;s<a.size()-1;s++){
            if(a[s]==a[s+1]) {
                flag=false;
                break;   
            }
        }*/
        //換行問題
        if(flag==true)cout<<"Case #"<<cases++<<": It is a B2-Sequence.\n";
        else cout<<"Case #"<<cases++<<": It is not a B2-Sequence.\n";
        cout << endl; 
    }
    return 0;
}