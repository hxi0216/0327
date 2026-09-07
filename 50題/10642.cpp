#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        long long int sx,sy,dx,dy,a=0,b=0,ans=0;
        cin>>sx>>sy>>dx>>dy;
        a=(sx+sy)*(sx+sy+1)/2+sx;
        b=(dx+dy)*(dx+dy+1)/2+dx;
        ans=b-a;
        cout<<"Case "<<cases<<": "<<ans<<endl;
    }
 return 0;   
}