#include<bits/stdc++.h>
using namespace std;

int f(int x) {
    if(x == 0) return 1;
    else {
        return x*f(x-1);
    }
}

int main() {
    int n;
    cin >> n;

    cout << f(n) << endl;
    return 0;
}