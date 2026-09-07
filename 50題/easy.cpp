#include <bits/stdc++.h>
using namespace std;



int main(){
    string s;
    while(cin>>s){
        int sum=0,maxv=1,n;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9'){
                n=s[i]-'0';
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                n=s[i]-'A'+10;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                n=s[i]-'a'+36;
            }
            else continue;
            
            sum+=n;
            maxv=max(maxv,n);
        }
        bool flag=false;
        for(int i=maxv+1;i<=62&&!flag;i++){
            if(sum%(i-1)==0){
                cout<<i<<endl;
                flag=true;
            }
        }
        if(!flag) cout<<"such number is impossible!\n";
    }
    return 0;
}