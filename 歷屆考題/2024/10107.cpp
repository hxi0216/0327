#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    multiset <int> l; //multiset可允許有重複的
    while(cin>>n){
        l.insert(n);
        auto it= l.begin(); //multiset <int>::iterator it= l.begin();
        advance(it,l.size()/2);
        if(l.size()%2==1){
           cout<<*it<<endl;
        }
        else{
            auto it2=it;
            it2--;
            cout<< (*it+*it2)/2<<endl;
        }
    }
    return 0;
}