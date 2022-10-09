#include<bits/stdc++.h>
using namespace std;

int n, m;
map<int, int> data;

int main() {
    cin >> n >> m;
    int a[n+1];
    for(int i=1; i<n+1; i++) {
        cin >> a[i];
    }

    for(int i=0; i<m; i++) {
        for(int j=1; j<n+1; j++) {
            a[j] += j;
        }

    }
}