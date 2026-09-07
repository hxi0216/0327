#include <iostream>
#include <string>
#include <map>
#include <iomanip> // 為了使用 setprecision 控制小數點

using namespace std;

int main() {
    // 優化輸入輸出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    if (cin >> tc) {
        string dummy;
        // 【關鍵 1】吃掉 cin >> tc 殘留的換行字元 (\n)
        getline(cin, dummy); 
        // 【關鍵 2】吃掉題目規定的「測資數量後的第一個空白行」
        getline(cin, dummy); 

        while (tc--) {
            map<string, int> trees;
            int total_trees = 0;
            string tree;

            // 【關鍵 3】不斷讀取一整行，直到遇到空白行或檔案結束 (EOF)
            while (getline(cin, tree)) {
                // 如果讀到空字串，代表這筆測資結束了，跳出內部迴圈
                if (tree == "") {
                    break;
                }
                
                // 樹的總量 +1，該品種的計數 +1
                trees[tree]++;
                total_trees++;
            }

            // 輸出這筆測資的結果
            for (auto it : trees) {
                // 計算百分比 (記得轉型成 double 以免變成整數除法)
                double percentage = (double)it.second / total_trees * 100.0;
                
                // fixed 和 setprecision(4) 用來精準控制輸出到小數點後四位
                cout << it.first << " " << fixed << setprecision(4) << percentage << "\n";
            }

            // 【關鍵 4】兩筆測資之間要印空白行。
            // 判斷方式：如果 tc 還大於 0，代表後面還有測資，才印空白行。
            if (tc > 0) {
                cout << "\n";
            }
        }
    }
    return 0;
}