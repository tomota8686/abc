#include<bits/stdc++.h>

using namespace std;
string s;
int main() {
    cin >> s;
    int l = s.size();
    if(l==1) {
        cout << s;
        return 0;
    }else{
        cout << s[l/2];
        return 0;
    }
    
}