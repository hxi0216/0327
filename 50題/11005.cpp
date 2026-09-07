#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
cin>>t;
while(t--){
    vector <int> l(36,0);//0~9 A~Z每個字元的印刷成本
    for(int i=0;i<l.size();i++){
        cin>>l[i];//把題目給的36個數字存進去
    }
    cout<<"Case "<<cases++<<":\n";
    int n;
    cin>>n;//有幾個數字要查
    while(n--){//處理每一個字
        int lt;
        cin>>lt;
        int sum,temp=0,minv=INT_MAX;//sum: 目前base的總成本, temp: 進位轉換時的暫存數字
        vector <int> o;//存最便宜的base
        for(int i=2;i<=36;i++){//base2 到 base36
            sum = 0;//每次換base都要重新算
            temp=lt;
            if(lt==0){ sum=l[0];}//0 在任何base都表示成 "0"
            else{
            while(temp!=0){
                sum += l[temp%i];//取最低位數
                temp/=i;
            }
                }//已完成該base的轉換
            if(sum==minv) o.push_back(i);//如果成本相同加入答案
            else if(sum<minv) {o.clear();o.push_back(i);}//如果更便宜把舊的答案清掉
            minv= min(minv,sum);
        }
        cout<<"Cheapest base(s) for number "<<lt<<":";
        for(int i=0;i<o.size();i++){
            cout<<" "<<o[i];//輸出所有最便宜base
        }
        cout<<endl;
        }
        if(t!=0)cout<<endl;
    }
    return 0;
}