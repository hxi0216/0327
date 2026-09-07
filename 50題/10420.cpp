#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string country;
    map <string ,int> c;
    for(int i=0;i<t;i++){
    cin>>country;
    c[country]++;
    getline(cin,country);
    }
    for(auto& i:c){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;   
}
