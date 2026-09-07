#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    while(cin >> N){
        vector <vector<int>> sq(N,vector<int> (N+1,0));

        for(int i=0;i<N;i++){
            for(int j=1 ;j<N+1;j++){
                int a;
                cin>>a;
                sq[i][j]=sq[i][j-1] +a;
            }
        }
        int Max=0,sum;
        for(int l=0;l<N;l++){
            for(int r=l+1;r<N+1;r++){
                sum=0;
                for(int h=0;h<N;h++){
                    sum+=sq[h][r]-sq[h][l];
                    if(sum<0) sum=0;
                    Max=max(Max,sum);
                }
            }
        }
        cout<<Max<<endl;
    }
    return 0;   
}

//0 0 -2