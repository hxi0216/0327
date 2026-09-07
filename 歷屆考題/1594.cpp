#include <bits/stdc++.h>
using namespace std;

bool zero(vector <int> b){

    for(int i=0;i<b.size();i++){
        if(b[i]!=0) return false; 
    }
    return true;
}
vector <int> getnext(vector <int> a) {
    vector <int> sum;
    for(int i=0;i<a.size();i++){
        sum.push_back(abs(a[i]-a[(i+1)%a.size()]));
        //if(i==aisize()-1) a[i]-a[0]
        //else a[i]-a[i+1]
    }
    return sum;
}

int main(){
    int t;
cin>>t;
while(t--){
    int l;
    cin>>l;
    vector <int> num(l,0);
    for(int i=0;i<l;i++){
        cin>>num[i];
    }
    vector <int> a=num; //slow
    vector <int> b=num; //fast
    do{
        a=getnext(a);
        b=getnext(getnext(b));
    }
    while(a!=b&&!zero(b));
    if(zero(b)) cout<<"ZERO\n";
    else cout<<"LOOP\n";
}
return 0;
}