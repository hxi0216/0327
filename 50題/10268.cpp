//498-bis
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(cin>>x)
    {
        long long int a[200000],f;
        int n,i;
        //intput
        for(n=0;;n++) {
            cin>>a[n];
            if(getchar()=='\n') break; }
        //calculate
        //f'(x)=((((A0*n)*x+A1*(n-1))*x+A2*(n-2))*)x+......+A[n-2]*2)*x+An-1*1
        f=a[0]*n;
        for(int i=1;i<n;i++)
        {  //每次乘上x後再加上下一項
            f=f*x+a[i]*(n-i);
        }
        cout<<f<<"\n";
    }
    return 0;
}
/*#include <bits/stdc++.h>
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
    for(int i=0;i<num.size();i++){
        a+=num[i]*pow(n,(num.size()-i-1));
    }    
    cout<<a<<endl;
}
return 0;
}*/