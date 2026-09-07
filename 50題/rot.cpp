#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <string> s;
    string l;
    int max=0; 
    while(getline(cin,l)){
        s.push_back(l);
        if(l.length()>max) max=l.length();//旋轉長度
    }
    for(int i=0;i<max;i++){
        for(int j=s.size()-1;j>=0;j--){//最後一列往上輸出所以size-1
            if(i<s[j].length())
            cout<<s[j][i];
            else cout<<" ";
        }
        cout<<endl;
    }
return 0;
}  