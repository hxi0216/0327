#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;//1000 digits
    while(cin>>a&&a!="0"){
        cout<<a<<" ";
        long long int even=0,odd=0;
        for(int i=0;i<a.length();i++){
            int d=a[i]-'0';
            if(i%2==1){
                odd+=d;
            }
            else even+=d;
        }
        if(abs(odd-even)%11==0)cout<<"is a multiple of 11.\n";
        else cout<<"is not a multiple of 11.\n";
    }
    return 0;
}
/*You can say 11
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(cin>>n&&n!="0")
    {
        int odd=0,even=0;
        for (int i=0;i<n.length();i++)
        {
            if(i%2==1)
                odd+=(n[i]-'0');
            if(i%2==0)
                even+=(n[i]-'0');
        }

        string var;
        var=abs(odd-even)%11==0 ? "" : " not";
        cout<<n<<" is"<<var<<" a multiple of 11."<<endl;
    }
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n&&n!=0){
        cout<<n<<" ";
        int odd=0,even=0,pos=0;
        while(n!=0){
            int digits=n%10;
            if(pos%2==1) odd+=digits;
            else even+=digits;
            pos++;
            n/=10;
        }
        if(abs(odd-even)%11==0) cout<<"is a multiple of 11.\n";
        else cout<<"is not a multiple of 11.\n";
    }
    return 0;
}*/