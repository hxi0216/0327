#include <bits/stdc++.h>
using namespace std;

int main(){
    char a;
    bool flag=true;
    while(cin.get(a)){
        if(a=='"'){
            if(flag==true){
                cout<<"``";
                flag=false;
            }
            else if(flag==false){
                cout<<"''";
                flag=true;
            }
            
        }
        else{
                cout<<a;
            }
    }
    return 0;
}