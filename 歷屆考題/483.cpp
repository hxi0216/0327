#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        stringstream ss(s);//單獨處理每個字
        string word;
        bool first=true;
        while(ss>>word){
            reverse(word.begin(),word.end());
                if(!first) cout<<" ";//非第一個輸出都要空格
                    cout<<word;
                    first=false;
        }    
        cout<<endl;
    }
    return 0;
}