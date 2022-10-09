#include<bits/stdc++.h>
using namespace std;

int n;

int main(){

    cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<n+1; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end(), greater<int>());

    int max = 0;
    int cnt = 1;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++){

            if((a.at(i) % 2 == 0 && a.at(j) % 2 != 0) || (a.at(i) % 2 != 0 && a.at(j) % 2 == 0) ) continue;

            if((a.at(i)+a.at(j)) % 2 == 0){
                if(max < a.at(i)+a.at(j)) {
                    max = a.at(i)+a.at(j);
                    cnt++;
                }
            }

            if(cnt == 10) {
                cout << max << endl;
                return 0;
            }
        }
    }
    if (max == 0) cout << -1 << endl;
    else cout << max << endl;
    
    return 0;
}