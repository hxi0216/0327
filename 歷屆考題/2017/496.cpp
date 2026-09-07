#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string s1,s2;
    while(getline(cin,s1)&&getline(cin,s2)){
    stringstream l1(s1);
    stringstream l2(s2);
    set <int> num;
    set <int> num2;
    while(l1>>a){
        num.insert(a);
    }
    while(l2>>b){
        num2.insert(b);
    }
    bool s=false; //全部都先設沒出現過
    bool A=true; //A有的B也有
    bool B=true;
    /*1*/for(int i:num){
       if(num2.count(i)!=0){//count 計算是否有出現過
        s=true;
       }
    }
    /*2*/for(int x:num){
        if(num2.count(x)==0){
            A=false;
        }
    }
    /*合併1&2
    for(int i:num){
       if(num2.count(i)!=0){//count 計算是否有出現過
        s=true;
       }
        else{
            A=false;
        }
    }
    */
    for(int h:num2){
        if(num.count(h)==0){
            B=false;
        }
    }
    if(s){ //1235 
        if(A&&!B){
            cout<<"A is a proper subset of B\n";
        }
        else if(!A&&B){
            cout<<"B is a proper subset of A\n";
        }
        else if(A&&B){
            cout<<"A equals B\n";
        }
        else{
            cout<<"I'm confused!\n";
        }
    }
    else{
        cout<<"A and B are disjoint\n";
    }
    
}
return 0;
    }