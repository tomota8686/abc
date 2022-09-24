#include<bits/stdc++.h>

using namespace std;
int x, y, z;
int out1 = 0;
int out2 = 0;
int main() {
    cin >> x >> y >> z;

    if (0<y && y<x && y<z) {
        cout << -1;
        return 0;
    }else if(z<y && x<y && y<0) {
        cout << -1;
        return 0;
    }

    if (x<0) {
        if(y<x || 0<y) {
            cout << abs(x);
            return 0;
        }
    }else if(x>0) {
        if(y<0 || x<y) {
            cout << abs(x);
            return 0;
        }
    }

    cout << abs(z)+abs(y-z)+abs(y-x);
}