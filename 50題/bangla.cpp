/* 正確版*/
#include <bits/stdc++.h>
using namespace std;

void bangla(long long int n){
    if(n>=10000000){
        bangla(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }
    if(n>=100000&&n<10000000){
        cout<<" "<<n/100000<<" lakh";
        n%=100000;
    }
    if(n>=1000&&n<100000){
        cout<<" "<<n/1000<<" hajar";
        n%=1000;
    }
    if(n>=100&&n<1000){
        cout<<" "<<n/100<<" shata";
        n%=100;
    }
    if(n>0){
        cout<<" "<<n;
    }
}

int main(){
    long long int n,t=1;
    while(cin>>n){
        cout<<setw(4)<<t++<<".";
        if(n==0){
            cout<<" 0";
        }
        else{
            bangla(n);
        }
        cout<<endl;
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

void bangla(long long int n){
        if(n>=10000000){
            bangla(n/10000000);
            cout<<" kuti";
            n%=10000000;
        }
        if(n>=100000&&n<10000000){
            cout<<" "<<n/100000<<"lakh";
            n%=100000;
        }
        if(n>=1000&&n<100000){
            cout<<" "<<n/1000<<"hajar";
            n%=1000;           
        }
        if(n>=100&&n<1000){
            cout<<" "<<n/100<<"shata";
            n%=100;
            cout<<" "<<n;
        }
    }
int main(){
    long long int n,cases=1;
    while(cin>>n){
    cout<<cases++<<". ";
    bangla(n);
    cout << endl;
}
}*/