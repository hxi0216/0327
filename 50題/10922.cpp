#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    while(getline(cin,a)){
        if(a=="0") return 0;
        cout<<a<<" is ";
        
        int sum=0;
        for(char i:a){
            sum+=i-'0';
        }
        if(sum%9!=0){
            cout<<"not a multiple of 9.\n";
            continue;
        }

        int d=1;
        while(sum>=10){
            int temp=sum;
            sum=0;
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
            d++;
        }
        cout<<"a multiple of 9 and has 9-degree "<<d<<".\n";
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    while(getline(cin,a)){
        if(a=="0") return 0;
        cout<<a<<" is ";
        int sum=0;
        for(char i:a){
            sum+=i-'0';
        }
        if(sum%9==0){
                    int d=1;
                    while(sum>=10){
                        int temp=sum;
                        sum=0;
                        while(temp>0){
                            sum+=temp%10;
                            temp/=10;
                        }
                        d++;
                    }
                    cout << "a multiple of 9 and has 9-degree " << d << ".\n";
                }
        else{
            cout<<"not multiple of 9.\n";
        }
    }
    return 0;
}*/