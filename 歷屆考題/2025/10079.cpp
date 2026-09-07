#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    while(cin>>n){
        if(n<0) return 0;
        cout<<1+(n*(n+1)/2)<<endl;
    }
    return 0;
}
/*1->2  ->1+1
2->4  ->1+1+2   1+(1+2) 1+3
3->7  ->1+1+2+3  1+(1+2+3) 1+6
4->11   ->1+1+2+3+4  1+(1+2+3+4) 1+10
5->16   ->1+1+2+3+4+5 1+(1+2+3+4+5) 1+15
*/