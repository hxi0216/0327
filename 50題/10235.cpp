#include <bits/stdc++.h>
using namespace std;

bool p(long long int n){
    if(n<=1) return 0;
    for(int i=2;i<=sqrt(n);i++){//判斷是否為質數 sqrt()平方根
        if(n%i==0){
            return 0;//非質數
        }
    }
    return 1;//是質數
}
int revnum(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;//轉好的*10+個位數
        n/=10;
    }
    return rev; 
}

int main(){
    int n;
    while(cin>>n){
        cout<<n<<" is ";
        int rev =revnum(n);//翻轉n
        if(!p(n)) cout<<"not prime.\n";
        else if(rev!=n&&p(rev)) cout<<"emirp.\n";
        else cout<<"prime.\n";
    }
    return 0;
}