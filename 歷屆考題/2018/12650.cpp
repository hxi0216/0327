#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b;
    while(cin>>a>>b){
        vector<int> c(b,0);//存輸入的值
        for(int i=0;i<b;i++){//input 人
            cin>>c[i];
        }
        //check
        vector<bool> check(a+1,false);//檢查先預設都出現過
        bool flag=false;//判斷是否都出現過
        for(int j=0;j<b;j++){
            check[c[j]]=true;
        }
        for(int i=1;i<=a;i++){//檢查所有數字
            if(!check[i]) {
                cout<<i<<" ";
                flag=true;
            }
        }
        if(!flag) cout<<"*";
        cout<<endl;
    }
    return 0;
}