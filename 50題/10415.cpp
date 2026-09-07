#include <bits/stdc++.h>
using namespace std;
int lo(char s){
    switch(s){
        case 'c':return 0b0111001111;
        case 'd':return 0b0111001110;
        case 'e':return 0b0111001100;
        case 'f':return 0b0111001000;
        case 'g':return 0b0111000000;
        case 'a':return 0b0110000000;
        case 'b':return 0b0100000000;
        case 'C':return 0b0010000000;
        case 'D':return 0b1111001110;
        case 'E':return 0b1111001100;
        case 'F':return 0b1111001000;
        case 'G':return 0b1111000000;
        case 'A':return 0b1110000000;
        case 'B':return 0b1100000000;
        default:return 0b0000000000;
    }
}
int main(){
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        
        getline(cin,s);
        int pre=0,cur;
        vector <int> cnt(10,0);
        for(int i=0;i<s.length();i++){
            cur=lo(s[i]);
            if(cur==0) break;
            int n=~pre & cur; //現在需要新增按下的手指
            int j=9;
            while(n>0){//看到哪個 bit 是 1，就代表哪根手指新按下
                if(n%2==1){
                    cnt[j]++;
                }
                n/=2;
                j--;
            }
            pre=cur;
        }
        bool first=true;//除地1個其餘數字前面都補空格
        for(auto k:cnt){
            if(!first) cout<<" ";
            cout<<k;
            first=false;
        }
        cout<<endl;
    }
    return 0;
}