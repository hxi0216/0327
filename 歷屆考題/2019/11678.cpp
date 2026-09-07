#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0) return 0;
        string s1,s2;
        getline(cin,s1);
        getline(cin,s1);
        stringstream l1(s1);
        stringstream l2(s2);
        set <int> num;
        set <int> num2;
        int h,q;
        while(l1 >> h){
            num.insert(h);
        }
        while(l2 >> q){
            num.insert(q);
        }

        int cnt=0;
        for(int i=0;i<num.size();i++){//num和num2一個一個比
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}