#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b1=0,b2=0;
        cin>>a;
        int a1=a,a2=a;
        while(a1!=0){
            if(a1%2==1) b1++; 
            a1/=2;
        }
        while(a2!=0){
            int temp=a2%10;
            while(temp!=0){
            if(temp%2==1) b2++; 
            temp/=2;
            }
            a2/=10;
        }
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}
/*popcount
判斷有幾個1
num &= (num-1);
count++;

num =100; 整個看,直到數字變0跳出
num-1 =011;

new num = num&num-1 =000;
*/