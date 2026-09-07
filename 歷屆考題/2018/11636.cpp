#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,cases=1;
    while(cin>>a){
        if(a<0) return 0;
        int sum=0;
        int temp = 1;
        while(temp < a){ //why temp <= a不行?
            temp *= 2;
            sum++;
        }
        cout<<"Case "<< cases++<<": "<<sum<<endl;
    }
    return 0;
}