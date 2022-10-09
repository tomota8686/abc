#include<bits/stdc++.h>
using namespace std;

int n, cnt;

int main(){
    cin >> n;
    int a[n+1];
    for(int i=1; i<n+1; i++) {
        cin >> a[i];
    }

    cnt = 0;

    for(int i=1; i<n+1; i++) {
        cnt += a[i];
    }

    cout << cnt << endl;

}