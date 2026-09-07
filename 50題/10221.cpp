#include <bits/stdc++.h>
using namespace std;

int main(){
double a,s;
string txt;
while(cin>>s>>a>>txt){
    double r,pi=3.14159265359;
    r=6440+s;
    if(txt=="min"){
        a/=60;
    }
    if(a>180){
        a=360-a;
    }
    double ans = a *pi/180;
    cout<<fixed<<setprecision(6)<<(r*ans)<<" "<<2*r*sin(ans/2)<<endl;
    }
    return 0;
}