#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector <int> f={1,2};
    for(int i=2;i<100;i++){//建 Fibonacci 陣列
            int s;
            s=f[i-1]+f[i-2];
            if (s > 100000000) break;
            f.push_back(s);
        }
    while(t--){
        int x;
        
        cin>>x;
        cout<<x<<" = ";
        
        bool flag=true;//扣除輸出真正數字前面會產生的0
        for(int i=f.size()-1;i>=0;i--){//從最大的 Fibonacci 開始往下選
            if(x>=f[i]){//如果目前 Fibonacci 可以使用
                x-=f[i];//用完就刪掉
                cout<<"1";
                flag = false;
            }
            else if(!flag) cout<<"0";//不能用補0
        }
        cout<<" (fib)\n";
    }
    return 0;
}