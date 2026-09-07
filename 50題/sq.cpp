#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
    if(a==0&&b==0) return 0;
    int  sum=0;
    double c,d;
    c=sqrt(a);
    d=sqrt(b);
    sum=floor(d)-ceil(c)+1;
    cout<<sum<<endl;
}
return 0;
}
//floor()->取下界
//ceil()->取上界
/*#include <bits/stdc++.h>
using namespace std;



int main(){
    long long int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0) return 0;
        int sum=0;
        for(int i=a;i<=b;i++){
            int sq=sqrt(i);
            if(sq*sq==i) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}*/