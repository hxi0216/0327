#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt,num;
    int h1,m1,h2,m2;
    while(cin>>txt>>num>>h1>>m1>>h2>>m2){\
        if(txt=="#") return 0;
    m1=h1*60+m1;
    m2=h2*60+m2;
    int sum=0,t=0,h=0;
    if(m2<=m1) m2=m2+24*60;
    for(int i=m1;i<m2;i++){
        int temp =i;
        temp%=24*60; //限制在24小時
        if(temp>=8*60 && temp<18*60) sum++;
        else if(temp>=18*60 && temp<22*60) t++;
        else h++;
    }
    double a=0,b=0,c=0;
    if(txt=="A"){
        a=sum*0.10;
        b=t*0.06;
        c=h*0.02;
    }
    else if(txt=="B"){
        a=sum*0.25;
        b=t*0.15;
        c=h*0.05;
    }
    else if(txt=="C"){
        a=sum*0.53;
        b=t*0.33;
        c=h*0.13;
    }
    else if(txt=="D"){
        a=sum*0.87;
        b=t*0.47;
        c=h*0.17;
    }
    else if(txt=="E"){
        a=sum*1.44;
        b=t*0.80;
        c=h*0.30;
    }
    cout<<setw(10)<<num<<setw(6)<<sum<<setw(6)<<t<<setw(6)<<h<<setw(3)<<txt<<setw(8)<<fixed<<setprecision(2)<<a+b+c<<endl;
    }
    return 0;
}