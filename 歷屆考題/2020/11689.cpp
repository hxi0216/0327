#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int e,f,c;//　c:一次換的瓶數　
        cin>>e>>f>>c;
        int sum=0,get=0,cnt=0;
        sum=e+f;//手上有的+撿到的
        while(sum>=c){
            get=sum/c;
            cnt+=get;//換到的數量
            sum=get+(sum%c);//新換到的+上一次未換完的
        }
        cout<<cnt<<endl;
    }
    return 0;
}