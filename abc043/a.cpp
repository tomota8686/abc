#include<bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin >> n;
    int i, cnt = 0;
    for(i=1;i<n+1;i++) cnt += i;
    cout << cnt << endl;
}