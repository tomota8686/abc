#include<bits/stdc++.h>
using namespace std;

int n, m;
int x[101];

int main(){
    cin >> n >> m;
    int k = 0;
    int tmp = 0;
    int tm[101];
    vector<vector<int>> data(n+1, vector<int>(n+1));

    //初期化
    for (int i=1; i<n+1; i++) {
        for (int j=1; j<n+1; j++) {
            data.at(i).at(j) = 0;
        }
    }

    //入力
    for(int i=1; i<m+1; i++) {
        cin >> k;
        for(int m=1; m<k+1; m++) {
            cin >> tm[m];
        }

        for(int j=1; j<k+1; j++) {
            for(int l=j+1; l<k+1; l++) {
                data.at(tm[j]).at(tm[l]) = 1;
                data.at(tm[l]).at(tm[j]) = 1;
            }
        }
    }

    //確認
    bool jud = true;
    for(int j=1; j<n+1; j++) {
            for(int l=j+1; l<n+1; l++) {
                if(data.at(j).at(l) != 1 && data.at(l).at(j) != 1) {
                    cout << "No" << endl;
                    return 0;
                }
            }
    }

    cout << "Yes" << endl;
    return 0;
}