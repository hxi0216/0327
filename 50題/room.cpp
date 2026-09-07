#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int s,d; 
    while(cin>>s>>d){
        for(;d>0;d-=s++);
            cout<<s-1<<endl;
    }
    return 0;
}

//1 2 3 4
//6 5 3 0

//3  4 5  6
//10 7 3 -2