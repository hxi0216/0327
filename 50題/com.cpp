#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        string output;
        int i,j;
        for(i=0,j=0;i<a.length()&&j<b.length();){
            if(a[i]==b[j]) { //相同一起往下一位看
                output+=a[i];
                i++;
                j++;
            }
            else if (a[i]>b[j]) j++;// a>b b後面能不可能再配到比a更大的字母
            else i++;
        }
        cout<<output<<endl;

    }
}