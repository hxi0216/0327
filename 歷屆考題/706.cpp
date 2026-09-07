#include <bits/stdc++.h>
using namespace std;

int main(){
    // 10 digit with their 5 rows for size 1
string num[10][5] = {
    {" - ", "| |", "   ", "| |", " - "},
    {"   ", "  |", "   ", "  |", "   "},
    {" - ", "  |", " - ", "|  ", " - "},
    {" - ", "  |", " - ", "  |", " - "},   
    {"   ", "| |", " - ", "  |", "   "},
    {" - ", "|  ", " - ", "  |", " - "},
    {" - ", "|  ", " - ", "| |", " - "},
    {" - ", "  |", "   ", "  |", "   "},
    {" - ", "| |", " - ", "| |", " - "},
    {" - ", "| |", " - ", "  |", " - "}
};
int s;
string n;
while(cin>>s>>n){
    if(s==0&&n=="0") return 0;
    for(int i=0;i<5;i++){
        if(i==0||i==2||i==4){
            for(int j=0;j<n.length();j++){
            cout<<num[n[j]-'0'][i][0];
                    for(int q=0;q<s;q++){
                        cout<<num[n[j]-'0'][i][1];
                    }
                    cout<<num[n[j]-'0'][i][2];
                    if(j!=n.length()-1) cout<<" ";
            }
        cout<<endl;
        }
        else{
            for(int r=0;r<s;r++){
                for(int j=0;j<n.length();j++){
                    cout<<num[n[j]-'0'][i][0];
                    for(int q=0;q<s;q++){
                        cout<<num[n[j]-'0'][i][1];
                    }
                    cout<<num[n[j]-'0'][i][2];
                    if(j!=n.length()-1) cout<<" ";
                }
                cout<<endl;
            }
        }
    }
    cout<<endl;
}
}