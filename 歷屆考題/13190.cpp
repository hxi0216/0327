#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,f;
        cin>>s>>f;
        int m;
        string w;
        priority_queue <tuple<int,int ,string,int> ,vector<tuple<int,int ,string,int>> ,greater<tuple<int,int ,string,int>>> Q;
        //總時間,順位,藥名,時間
        for(int i=0;i<s;i++){
            cin>>w>>m;
            Q.push({m,i,w,m});//開始時間,第幾個輸入,藥名,時間
        }
        for(int i=1;i<=f;i++){
            tuple<int,int,string,int> r=Q.top();
            //tie(...,...,...,...)=Q.top();
            Q.pop();
            Q.push({get<0>(r)+get<3>(r),get<1>(r),get<2>(r),get<3>(r)});
            cout<<get<0>(r)<<" "<<get<2>(r)<<endl;
        }
        
    }
    return 0;
}