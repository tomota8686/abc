#include<bits/stdc++.h>

using namespace std;
int n, x, y;
int main() {
    cin >> n >> x >> y;
    // int型の2次元配列(3×4要素の)の宣言
    vector<vector<int>> data(n-1, vector<int>(2));
    vector<int> out(n-1);
 
    // 入力 (2重ループを用いる)
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < 2; j++) {
        cin >> data.at(i).at(j);
        }
    }

    //不可能


}