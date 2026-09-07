#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
while(cin>>a>>b>>c>>d){
    if(a==0&&b==0&&c==0&&d==0) return 0;
    int sum=0;
    //first
    if(a<b) sum+=40-(b-a);
    else if(a>=b)  sum+=a-b;
    //second b->c
    if(b<=c) sum+=c-b;
    else if(b>c) sum+=40-(b-c);
    //third
    if(c<d) sum+=40-(d-c);
    else if(c>=d) sum+=c-d;
    cout<<(sum+120)*9<<endl;
}
return 0;
}