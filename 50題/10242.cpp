#include <bits/stdc++.h>
using namespace std;

int main(){
    double x1,x2,x3,x4,y1,y2,y3,y4,a,b;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
    {
        if(x1==x3&&y1==y3){
            a=(x2+x4)-x1;
            b=(y2+y4)-y1;
        }
        else if(x1==x4&&y1==y4){
            a=(x2+x3)-x1;
            b=(y2+y3)-y1;
        }
        else if(x2==x3&&y2==y3){
            a=(x1+x4)-x2;
            b=(y1+y4)-y2;
        }
        else{
            a=(x1+x3)-x2;
            b=(y1+y3)-y2;
        }
        cout<<fixed<<setprecision(3)<<a<<" "<<b<<endl;
    }
    return 0;
}