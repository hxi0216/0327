#include <bits/stdc++.h>
using namespace std;

int sum(long long int n){
    int sum;
    while(n>=10){
        sum=0;
        while(n>0){
            sum+=n%10;//一開始會把sum寫成n  n+=n%10
            n/=10;            
        }
        n=sum;//為甚麼不能直接輸出sum
    }
    return n;
}

int main(){
    int n;
    while(cin>>n&&n!=0){
        cout<<sum(n)<<endl;
    }
    return 0;
}