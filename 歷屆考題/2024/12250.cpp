#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int cases=1;
    while(getline(cin,s)){
        if(s=="#") return 0;
        cout<<"Case "<<cases++<<": ";
        if(s=="HELLO"){
            cout<<"ENGLISH\n";
        }
        else if(s=="HOLA"){
            cout<<"SPANISH\n";
        }
        else if(s=="HALLO"){
            cout<<"GERMAN\n";
        }
        else if(s=="BONJOUR"){
            cout<<"FRENCH\n";
        }
        else if(s=="CIAO"){
            cout<<"ITALIAN\n";
        }
        else if(s=="ZDRAVSTVUJTE"){
            cout<<"RUSSIAN\n";
        }
        else{
            cout<<"UNKNOWN"<<endl;
        }
    }
    return 0;
}