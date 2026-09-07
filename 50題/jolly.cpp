#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    vector <int> num(30000);
    while(cin>>a){
        for(int i=0;i<a;i++){
            cin>>num[i];
        }
       bool flag =true;
        vector <int> check(30000, 0);
        for(int i=1;i<a;i++){
            if(check[abs(num[i]-num[i-1])]==1) flag=false;
            else check[abs(num[i]-num[i-1])]=1;
        }
        for(int i=1;i<=a-1 && flag;i++){
           if(check[i]!=1){
                flag=false;
           } 
        }
        if(flag==true) cout<<"jolly\n";
        else cout<<"not jolly\n";
    }
    return 0;
}
/*解法2
#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;
        while(cin>>n){
            vector <int> p(n,0);
            for(int i=0;i<n;i++){
                cin>>p[i];
            }
            bool flag=true;
            vector <int> k;
            int sum=0;
            for(int i=0;i<p.size()-1;i++){
                sum=abs(p[i]-p[i+1]);
                k.push_back(sum);
            }
            sort(k.begin(),k.end());
            for(int i=0;i<k.size();i++){
                if(k[i]!=i+1) flag=false;
            }
            if(flag) cout<<"Jolly\n";
            else cout<<"Not jolly\n";
        }
    return 0;
}*/
/*int main(){
    int a,b;
    vector <int> num;
    while(cin>>a){
        getline(cin,num);
        for(int i=0;i<a;i++){
           if(1<=(num[i]-num[i-1])<=a-1){
            cout<<num[i]<<endl;
            cout<<num[i-1]<<endl;
            cout<<"jolly\n";
           } 
           else{
            cout<<"not jolly\n";
           }
        }
    }
    return 0;
}*/