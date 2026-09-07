#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,a; 
    while(cin>>n){
    vector <int> num;
    do{
        int c;
        cin>>c;
        num.push_back(c);
    }while(getchar()!='\n');

    a = 0;
    for(int i=0;i<num.size()-1;i++){
        a+=num[i]*(num.size()-1-i)*pow(n,(num.size()-i-2));
    }    
    cout<<a<<endl;
}
return 0;
}