#include <bits/stdc++.h>
using namespace std;

int main(){
    int  t,s,d;
    cin>>t;
    while(t--){
    cin>>s>>d; //a+b=s : a-b=d　　
    int a=0,b=0;
    a=(s+d)/2;
    b=s-a;
    if((s>=d)&&((s+d)%2!=1)) cout<<a<<" "<<b<<endl;
    else cout<<"impossible\n";
}
return 0;
}