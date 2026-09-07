#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
while(getline(cin,s)){
    int table[256]={0},maxv=0;
    for(char txt:s){
        if(isalpha(txt)){
            table[(int)txt]++;
            maxv = max(maxv, table[(int)txt]);
        }
    }
    for(char txt='A';txt<='Z';txt++){
        if(table[(int)txt]==maxv){
            cout<<txt;
        }
    }
    for(char txt='a';txt<='z';txt++){
        if(table[(int)txt]==maxv){
            cout<<txt;
        }
    }
   cout<<" "<<maxv<<endl;
}
    return 0;
}