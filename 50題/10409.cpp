#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
while(cin>>a){
    if(a==0) return 0;
    string s;
    int top=1,bottom=6;
    int north=2,south=5;
    int west=3,east=4;     
    int temp,temp1,temp2;
    cin.ignore();
    for(int i=0;i<a;i++){
        
        getline(cin,s);
        if(s=="north"){
        temp=top;
        top=south; 
        temp1=north; 
        north=temp;
        temp2=bottom;
        bottom=temp1;
        south=temp2;
    }  
    else if(s=="south"){
        temp=south;
        south=top;
        temp1=bottom;
        bottom=temp;
        top=north;
        north=temp1;
    }
    else if(s=="west"){
        temp=west;
        west=top;
        temp1=bottom;
        bottom=temp;
        top=east;
        east=temp1;
    }
    else if(s=="east"){
        temp=east;
        east=top;
        temp1=west;
        west=bottom;
        top=temp1;
        bottom=temp;
    }
    }
    cout<<top<<endl;
}
return 0;
}