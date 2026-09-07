#include <bits/stdc++.h>
using namespace std;

int main(){
    string key="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int table[256];
    
    for(int i=0;i<key.size();i++){
        table[key[i]]=i;
    }

    string line;
    while(getline(cin, line)){
        for(char txt : line){
            txt = toupper(txt);
            if(txt!=' ')
                cout << key[table[txt]-1];
            else
                cout << txt;
        }
        cout << '\n'; 
    }
    return 0;
}