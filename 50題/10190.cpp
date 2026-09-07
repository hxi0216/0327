#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        bool flag=true;//判斷條件是否正確
        vector <int> t;
        t.push_back(n);
        if(n<2||m<2) flag=false; //若其中一個<=1不合理
        else{
            while(n!=1){//不等於1繼續做
                if(n%m!=0||m<=1){//除數不能<=1或每次a%b必須等於0
                    flag=false;
                    break;
                }
                else{
                    n/=m;
                    t.push_back(n);//答案存進vector
                }
            }
        }
        if(flag) {//都正確全部輸出
            for(int x:t){
                cout<<x;
            if(x!=1) cout<<" ";  //不是等於1都要空格
            }
            cout<<endl;
        }
        else cout<<"Boring!\n";
    }
    return 0;   
}