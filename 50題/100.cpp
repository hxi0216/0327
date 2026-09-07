/*正解*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;
    while(cin>>a>>b){
        int maxv=0,L;
        long long a0 = a, b0 = b;
        if(a > b) swap(a, b);
        for(int i=a;i<=b;i++){
            L=1;
            long long int temp=i;
            while(temp!=1){//temp&&temp!=1錯誤寫法
                if(temp%2==1){
                    temp=3*temp+1;
                }
                else if(temp%2==0){
                    temp/=2;
                }
                L++;
                
            }
            if(L>maxv){
                maxv=L;
            }
        }
        cout<<a0<<" "<<b0<<" "<<maxv<<endl;
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;
    while(cin>>a>>b){
        int maxv=0,L;
        for(int i=a;i<=b;i++){
            L=1;
            int temp=i;
            while(temp!=1){//temp&&temp!=1錯誤寫法
                if(temp%2==1){
                    temp=3*temp+1;
                }
                else if(temp%2==0){
                    temp/=2;
                }
                L++;
                
            }
            if(L>maxv){
                maxv=L;
            }
        }
        cout<<a<<" "<<b<<" "<<maxv<<endl;
    }
    return 0;
}*/