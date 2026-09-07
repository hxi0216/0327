#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,A1=0,A2=0;
    while(cin>>n){
        vector<int> c(n,0);
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        sort(c.begin(),c.end());
        long long int sum=0;
        A1=c[(n-1)/2];//左中位數(偶數)
        A2=c[n/2];//右中位數(奇數)
        for(int i:c){
            if(i>=A1&&i<=A2) sum++;//input內計算有幾個數字
        }
        long long int x=A2-A1+1;//區間有幾數字
        cout<<A1<<" "<<sum<<" "<<x<<endl;
    }
    return 0;
}