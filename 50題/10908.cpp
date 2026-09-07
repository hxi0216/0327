#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
cin>>t;
while(t--){
    int m,n,q;
    cin>>m>>n>>q;
    cout<<m<<" "<<n<<" "<<q<<endl;
    vector<vector<char>> s(m, vector<char>(n,'0')); 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    while(q--){
        int a,b;
        int r=1;
        cin>>a>>b;
        bool flag=true;
        
        while(flag){
            if(!(a+r<m&&a-r>=0&&b+r<n&&b-r>=0)){//判斷是否有出界
                /*s[a+r][b];//往下
                s[a-r][b];//往上
                s[a][b+r];//往右
                s[a][b-r];//往左*/
                flag = false;
            }
            for(int i=b-r;i<=b+r && flag;i++){//判斷row
                if(s[a+r][i]!=s[a][b]||s[a-r][i]!=s[a][b]){
                    flag=false;
                }
               
            }
            for(int i=a-r;i<=a+r && flag;i++){// 判斷col
                if(s[i][b-r]!=s[a][b]||s[i][b+r]!=s[a][b]){
                    flag=false;
                }
            }
            if(flag)r++;
        }
        cout<<2 * (r - 1) + 1<<endl;
    }
    
}
return 0;
}