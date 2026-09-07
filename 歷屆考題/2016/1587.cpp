#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> box[6];
    for(int i=0;i<6;i++){
        cin>>box[i].first>>box[i].second;
        if(box[i].first>box[i].second){
            swap(box[i].first,box[i].second);
        }
    }
    sort(box,box+6);
    //如何判斷各組是否出現2次
    bool flag=true;
    for(int i=0;i<6;i+=2){
        if(box[i]!=box[i+1]){
            flag=false;
            break;
        }
        
    }
    if(flag)cout<<"POSSIBLE\n";
    else cout<<"IMPOSSIBLE\n";
}
