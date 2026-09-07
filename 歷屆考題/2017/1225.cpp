#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        vector<int> cnt(10,0);
        for(int i=1;i<=a;i++){
            int temp=i;
           if(temp>=10){//大於10
                cnt[temp/10]++;
                cnt[temp%10]++;
           }
           else if(temp>=0&&temp<=9){//1~9
            cnt[i]++;
           }
        }
        for(int i=0;i<10;i++){
            cout<<cnt[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}