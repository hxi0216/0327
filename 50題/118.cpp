#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int s,t;
    char d;
    vector<vector<bool>> r(x + 1,vector<bool>(y + 1,true));
    while(cin>>s>>t>>d){
        cin.ignore();
        int u;
        switch (d)
        {
            case 'E': {u=0;break;}
            case 'S': {u=1;break;}
            case 'W': {u=2;break;}
            case 'N': {u=3;break;}
        }
        string k;
        getline(cin,k);
        bool flag=true;
        for(int i=0;i<k.length();i++){
            if(k[i]=='L') u = (u + 3)%4;
            else if(k[i]=='R')u = (u+1)%4;
            if(k[i]=='F'){
                int temp1=s,temp2=t;
                if(u==0) temp1++;
                else if(u==1) temp2--;
                else if(u==2) temp1--;
                else temp2++;
                if(!(temp1>=0&&temp1<=x&&temp2>=0&&temp2<=y)){
                    
                    if (r[s][t]) {
                        r[s][t]=false;
                        flag=false;
                        break;
                    } 
                }
                else {
                    s=temp1;
                    t=temp2;
                }
            }
        }
        switch(u){
            case 0:{d='E';break;}
            case 1:{d='S';break;}
            case 2:{d='W';break;}
            case 3:{d='N';break;}
        }
        if(flag) cout<<s<<" "<<t<<" "<<d<<endl;
        else cout<<s<<" "<<t<<" "<<d<<" LOST\n";
    }
    return 0;
}