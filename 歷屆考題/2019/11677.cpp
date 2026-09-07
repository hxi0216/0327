#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2){
        if(m1==0&&h1==0&&h2==0&&m2==0) return 0;
        h1=m1+h1*60;
        h2=m2+h2*60;
        int sum=h2-h1;//鬧鐘時間-現在時間
        if(sum<0){
            sum+=1440;//if剪出來為負的要加一天的時間
        }
        cout<<sum<<endl;
    }
    return 0;
}