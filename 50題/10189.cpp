#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,t=1;
    while(cin>>a>>b){
        if(a==0&&b==0) return 0;
        if(t!=1) cout<<endl;
        cout<<"Field #"<<t++<<":\n";
        vector <vector<int>> s(a,vector<int>(b,0));
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                char f;
                cin>>f;
                if(f=='*'){
                    s[i][j]=-10;//-INT_MAX
                    for(int x=i-1;x<=i+1;x++){
                        for(int y=j-1;y<=j+1;y++){
                            if(x<a&&x>=0&&y<b&&y>=0)
                            s[x][y]++;
                        }
                    }
                    /*s[i+1][j]
                    s[i-1][j]
                    s[i][j-1]
                    s[i][j+1]
                    s[i-1][j-1]
                    s[i+1][j+1]
                    s[i-1][j+1]
                    s[i+1][j-1]*/
                }

            }
        }
        for(auto q:s){ //for(vector<int> q:s)
            for(int u:q){
                if(u<0) cout<<"*";
                else cout<<u;
            }
            cout<<endl;
        }  
    }
   return 0;
} 