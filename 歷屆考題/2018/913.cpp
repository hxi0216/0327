#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    while(cin>>n){
        //n=2*row-1;找第幾列
        //cnt=row*row; 第幾個奇數
        //target = 2* cnt-1; 真正數字
        long long int row = (n+1)/2;
        long long int cnt=row*row;
        long long int target = 2*cnt-1;
        long long int a=target -2;
        long long int b=target-4;
        long long int sum=target+a+b;
        cout<<sum<<endl;
    }
    return 0;
}