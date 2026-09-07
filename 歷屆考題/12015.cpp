#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cases=1;
    cin>>t;
    while(t--){
        vector <pair<string ,int>> f;
        for(int i=0;i<10;i++){
            int num;
            string s;
            cin>>s>>num;
            f.push_back({s,num});
        }

        int mx=0;
        for(pair<string, int> x:f){
            mx=max(mx,x.second);
        }
        cout << "Case #" << cases++ << ":\n";

        // 輸出所有最大值的 first
        for (pair<string, int> x : f) {
            if (x.second == mx) {
                cout << x.first << endl;
            }
        }
    }
    return 0;
}