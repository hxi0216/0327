#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,Case=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<"Case "<<Case++<<": ";
        int num = stoi(s.substr(0, s.size() - 1));
    char c = s.back();

    for(int i = 0; i < num; i++){
        cout << c;
    }
    }
}