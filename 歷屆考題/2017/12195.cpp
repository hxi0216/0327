#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)&&s!="*"){
        stringstream c(s);//s丟到c
        c.ignore();// /
        string j;
        int cnt=0;
        while(getline(c,j,'/')){// 吃下一個/前
        double sum=0;
        for(int i=0;i<j.length();i++){
            double a=0;
            switch (j[i])
            {
                case 'W':{a=1;break;}
                case 'H':{a=1.0/2;break;}
                case 'Q':{a=1.0/4;break;}
                case 'E':{a=1.0/8;break;}
                case 'S':{a=1.0/16;break;}
                case 'T':{a=1.0/32;break;}
                case 'X':{a=1.0/64;break;}
            }
            sum+=a;
        }
        if(sum==1) cnt++;
        }
        cout<<cnt<<endl;    
    }
    return 0;
}