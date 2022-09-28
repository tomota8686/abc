#include <bits/stdc++.h>

using namespace std;

int l, n = 0;

int main(){
    cin >> l >> n;
    vector<string> s(n);
    int i;
    for(i=0;i<n;i++) cin >> s.at(i);
    sort(s.begin(), s.end());
    for(i=0;i<n;i++) cout << s.at(i);
    cout << endl;
}