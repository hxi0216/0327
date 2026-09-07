#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
cin>>t;
while(t--){
    int num;
    vector <pair<int,int>> list(76,pair<int,int>(-1,-1));
    vector<int> rowcnt={0,0,1,0,0};
    vector<int> colcnt={0,0,1,0,0};
    vector <int> acnt={1,1};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i!=2||j!=2) //!(i==2&&j==2)
            { 
                cin>>num;
            list[num]={i,j};
            }
        }
    }
    bool flag=false;
    int a;
    for(int i=0;i<75;i++){
        cin>>a;
        int row,col;
        tie(row,col)=list[a];
        if(row!=-1&&col!=-1){
            rowcnt[row]++;
            colcnt[col]++;
            if(row==col)acnt[0]++;
            else if(row+col==4) acnt[1]++;
        }
        if(!flag){
        for(int k:rowcnt){
            if(k==5) flag=true;
        }
        for(int s:colcnt){
            if(s==5) flag=true;
        }
        for(int j:acnt){
            if(j==5) flag=true;
        }
        if(flag)cout<<"BINGO after "<<i+1<<" numbers announced\n";
        }   
    }
    
    }
    return 0;
}