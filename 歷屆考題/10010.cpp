#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector <vector<char>> p(m,vector<char>(n,0));//存表
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>p[i][j];
                p[i][j]=tolower(p[i][j]);
            }
        }
        int q;//問題數
        cin>>q;
        cin.ignore();
        while(q--){
            string w;
            getline(cin,w);
            for(int i=0;i<w.length();i++){
                w[i]=tolower(w[i]);
            }
            bool flag=true;//沒找到
            for(int i=0;i<m&&flag;i++){
                for(int j=0;j<n&&flag;j++){
                    if(w[0]==p[i][j]){
                        for(int r=0;r<8&&flag;r++){ //左上->上->右上->左->右->左下->下->右下
                            int x[8]={-1,0,1,-1,1,-1,0,1};
                            int y[8]={-1,-1,-1,0,0,1,1,1};
                            if(((i+(w.length()-1)*y[r])<m)&&((i+(w.length()-1)*y[r])>=0)&&(((j+(w.length()-1)*x[r])>=0))&&((j+(w.length()-1)*x[r])<n)){
                            for(int s=1;s<w.length();s++){
                                    if(w[s]!=p[i+s*y[r]][j+s*x[r]]){
                                        flag=true;
                                        break;
                                    }
                                    else flag=false;//找到
                            }
                          }
                        }
                        if(!flag)cout<<i+1<<" "<<j+1<<endl;
                    }
                }
            }
        }
        if(t>0) cout<<endl;
    }
    return 0;
}