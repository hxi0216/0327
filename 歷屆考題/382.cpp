#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"PERFECTION OUTPUT\n";
while(cin>>num){
    if(num==0) {
        cout<<"END OF OUTPUT"<<endl;
        break;
    }
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<setw(5)<<num<<"  "<<"PERFECT\n";
    }
    else if(sum<num){
        cout<<setw(5)<<num<<"  "<<"DEFICIENT\n";
    }
    else{
        cout<<setw(5)<<num<<"  "<<"ABUNDANT\n";
    }
}
}